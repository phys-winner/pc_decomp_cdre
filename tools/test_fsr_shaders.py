"""Check the GLES image conversion against nested SPIRV-Cross coordinates."""
import unittest
from fsr3_shaders import spd_array_access


class FsrShaderConversionTest(unittest.TestCase):
    def test_nested_spd_coordinates(self):
        source = "imageStore(rw_spd_mip5, ivec2(p + uvec2(0u, 1u)), vec4(a, b, 0., 0.));"
        self.assertEqual(spd_array_access(source),
            "imageStore(rw_spd_pyramid, ivec3(ivec2(p + uvec2(0u, 1u)), 5), vec4(a, b, 0., 0.));")
        self.assertEqual(spd_array_access("imageLoad(rw_spd_mip3, ivec2(array[i + 1]))"),
            "imageLoad(rw_spd_pyramid_read, ivec3(ivec2(array[i + 1]), 3))")
        self.assertEqual(spd_array_access("imageLoad(other, p)"), "imageLoad(other, p)")
        with self.assertRaises(ValueError):
            spd_array_access("imageLoad(rw_spd_mip0, ivec2(p")


if __name__ == "__main__":
    unittest.main()
