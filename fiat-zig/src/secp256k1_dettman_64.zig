// Autogenerated: 'src/ExtractionOCaml/dettman_multiplication' --lang Zig --internal-static --public-function-case camelCase --private-function-case camelCase --public-type-case UpperCamelCase --private-type-case UpperCamelCase --no-prefix-fiat --package-name secp256k1_dettman '' 64 5 48 2 '2^256 - 4294968273' mul square
// curve description (via package name): secp256k1_dettman
// machine_wordsize = 64 (from "64")
// requested operations: mul, square
// n = 5 (from "5")
// last_limb_width = 48 (from "48")
// last_reduction = 2 (from "2")
// s-c = 2^256 - [(1, 4294968273)] (from "2^256 - 4294968273")
// inbounds_multiplier: None (from "")
//
// Computed values:
//
//

const std = @import("std");
const mode = @import("builtin").mode; // Checked arithmetic is disabled in non-debug modes to avoid side channels

inline fn cast(comptime DestType: type, target: anytype) DestType {
    @setEvalBranchQuota(10000);
    if (@typeInfo(@TypeOf(target)) == .Int) {
        const dest = @typeInfo(DestType).Int;
        const source = @typeInfo(@TypeOf(target)).Int;
        if (dest.bits < source.bits) {
            return @bitCast(DestType, @truncate(std.meta.Int(source.signedness, dest.bits), target));
        } else {
            return @bitCast(DestType, @as(std.meta.Int(source.signedness, dest.bits), target));
        }
    }
    return @as(DestType, target);
}

/// The function mul multiplies two field elements.
///
/// Postconditions:
///   eval out1 mod 115792089237316195423570985008687907853269984665640564039457584007908834671663 = (eval arg1 * eval arg2) mod 115792089237316195423570985008687907853269984665640564039457584007908834671663
///
/// Input Bounds:
///   arg1: [[0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1fffffffffffe]]
///   arg2: [[0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1fffffffffffe]]
/// Output Bounds:
///   out1: [[0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x17fffffffffff]]
pub fn mul(out1: *[5]u64, arg1: [5]u64, arg2: [5]u64) void {
    @setRuntimeSafety(mode == .Debug);

    const x1 = (cast(u128, (arg1[4])) * cast(u128, (arg2[4])));
    const x2 = cast(u64, (x1 >> 64));
    const x3 = cast(u64, (x1 & cast(u128, 0xffffffffffffffff)));
    const x4 = (((cast(u128, (arg1[0])) * cast(u128, (arg2[3]))) + ((cast(u128, (arg1[1])) * cast(u128, (arg2[2]))) + ((cast(u128, (arg1[2])) * cast(u128, (arg2[1]))) + (cast(u128, (arg1[3])) * cast(u128, (arg2[0])))))) + (cast(u128, x3) * cast(u128, 0x1000003d10)));
    const x5 = cast(u64, (x4 >> 52));
    const x6 = cast(u64, (x4 & cast(u128, 0xfffffffffffff)));
    const x7 = ((cast(u128, x5) + ((cast(u128, (arg1[0])) * cast(u128, (arg2[4]))) + ((cast(u128, (arg1[1])) * cast(u128, (arg2[3]))) + ((cast(u128, (arg1[2])) * cast(u128, (arg2[2]))) + ((cast(u128, (arg1[3])) * cast(u128, (arg2[1]))) + (cast(u128, (arg1[4])) * cast(u128, (arg2[0])))))))) + (cast(u128, x2) * cast(u128, 0x1000003d10000)));
    const x8 = cast(u64, (x7 >> 52));
    const x9 = cast(u64, (x7 & cast(u128, 0xfffffffffffff)));
    const x10 = (x9 >> 48);
    const x11 = (x9 & 0xffffffffffff);
    const x12 = (cast(u128, x8) + ((cast(u128, (arg1[1])) * cast(u128, (arg2[4]))) + ((cast(u128, (arg1[2])) * cast(u128, (arg2[3]))) + ((cast(u128, (arg1[3])) * cast(u128, (arg2[2]))) + (cast(u128, (arg1[4])) * cast(u128, (arg2[1])))))));
    const x13 = cast(u64, (x12 >> 52));
    const x14 = cast(u64, (x12 & cast(u128, 0xfffffffffffff)));
    const x15 = ((cast(u128, (arg1[0])) * cast(u128, (arg2[0]))) + (cast(u128, (x10 + (x14 << 4))) * cast(u128, 0x1000003d1)));
    const x16 = cast(u64, (x15 >> 52));
    const x17 = cast(u64, (x15 & cast(u128, 0xfffffffffffff)));
    const x18 = (cast(u128, x13) + ((cast(u128, (arg1[2])) * cast(u128, (arg2[4]))) + ((cast(u128, (arg1[3])) * cast(u128, (arg2[3]))) + (cast(u128, (arg1[4])) * cast(u128, (arg2[2]))))));
    const x19 = cast(u64, (x18 >> 52));
    const x20 = cast(u64, (x18 & cast(u128, 0xfffffffffffff)));
    const x21 = ((cast(u128, x16) + ((cast(u128, (arg1[0])) * cast(u128, (arg2[1]))) + (cast(u128, (arg1[1])) * cast(u128, (arg2[0]))))) + (cast(u128, x20) * cast(u128, 0x1000003d10)));
    const x22 = cast(u64, (x21 >> 52));
    const x23 = cast(u64, (x21 & cast(u128, 0xfffffffffffff)));
    const x24 = (cast(u128, x19) + ((cast(u128, (arg1[3])) * cast(u128, (arg2[4]))) + (cast(u128, (arg1[4])) * cast(u128, (arg2[3])))));
    const x25 = cast(u64, (x24 >> 64));
    const x26 = cast(u64, (x24 & cast(u128, 0xffffffffffffffff)));
    const x27 = ((cast(u128, x22) + ((cast(u128, (arg1[0])) * cast(u128, (arg2[2]))) + ((cast(u128, (arg1[1])) * cast(u128, (arg2[1]))) + (cast(u128, (arg1[2])) * cast(u128, (arg2[0])))))) + (cast(u128, x26) * cast(u128, 0x1000003d10)));
    const x28 = cast(u64, (x27 >> 52));
    const x29 = cast(u64, (x27 & cast(u128, 0xfffffffffffff)));
    const x30 = (cast(u128, (x28 + x6)) + (cast(u128, x25) * cast(u128, 0x1000003d10000)));
    const x31 = cast(u64, (x30 >> 52));
    const x32 = cast(u64, (x30 & cast(u128, 0xfffffffffffff)));
    const x33 = (x31 + x11);
    out1[0] = x17;
    out1[1] = x23;
    out1[2] = x29;
    out1[3] = x32;
    out1[4] = x33;
}

/// The function square squares a field element.
///
/// Postconditions:
///   eval out1 mod 115792089237316195423570985008687907853269984665640564039457584007908834671663 = (eval arg1 * eval arg1) mod 115792089237316195423570985008687907853269984665640564039457584007908834671663
///
/// Input Bounds:
///   arg1: [[0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1fffffffffffe]]
/// Output Bounds:
///   out1: [[0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x1ffffffffffffe], [0x0 ~> 0x17fffffffffff]]
pub fn square(out1: *[5]u64, arg1: [5]u64) void {
    @setRuntimeSafety(mode == .Debug);

    const x1 = ((arg1[3]) * 0x2);
    const x2 = ((arg1[2]) * 0x2);
    const x3 = ((arg1[1]) * 0x2);
    const x4 = ((arg1[0]) * 0x2);
    const x5 = (cast(u128, (arg1[4])) * cast(u128, (arg1[4])));
    const x6 = cast(u64, (x5 >> 64));
    const x7 = cast(u64, (x5 & cast(u128, 0xffffffffffffffff)));
    const x8 = (((cast(u128, x4) * cast(u128, (arg1[3]))) + (cast(u128, x3) * cast(u128, (arg1[2])))) + (cast(u128, x7) * cast(u128, 0x1000003d10)));
    const x9 = cast(u64, (x8 >> 52));
    const x10 = cast(u64, (x8 & cast(u128, 0xfffffffffffff)));
    const x11 = ((cast(u128, x9) + ((cast(u128, x4) * cast(u128, (arg1[4]))) + ((cast(u128, x3) * cast(u128, (arg1[3]))) + (cast(u128, (arg1[2])) * cast(u128, (arg1[2])))))) + (cast(u128, x6) * cast(u128, 0x1000003d10000)));
    const x12 = cast(u64, (x11 >> 52));
    const x13 = cast(u64, (x11 & cast(u128, 0xfffffffffffff)));
    const x14 = (x13 >> 48);
    const x15 = (x13 & 0xffffffffffff);
    const x16 = (cast(u128, x12) + ((cast(u128, x3) * cast(u128, (arg1[4]))) + (cast(u128, x2) * cast(u128, (arg1[3])))));
    const x17 = cast(u64, (x16 >> 52));
    const x18 = cast(u64, (x16 & cast(u128, 0xfffffffffffff)));
    const x19 = ((cast(u128, (arg1[0])) * cast(u128, (arg1[0]))) + (cast(u128, (x14 + (x18 << 4))) * cast(u128, 0x1000003d1)));
    const x20 = cast(u64, (x19 >> 52));
    const x21 = cast(u64, (x19 & cast(u128, 0xfffffffffffff)));
    const x22 = (cast(u128, x17) + ((cast(u128, x2) * cast(u128, (arg1[4]))) + (cast(u128, (arg1[3])) * cast(u128, (arg1[3])))));
    const x23 = cast(u64, (x22 >> 52));
    const x24 = cast(u64, (x22 & cast(u128, 0xfffffffffffff)));
    const x25 = ((cast(u128, x20) + (cast(u128, x4) * cast(u128, (arg1[1])))) + (cast(u128, x24) * cast(u128, 0x1000003d10)));
    const x26 = cast(u64, (x25 >> 52));
    const x27 = cast(u64, (x25 & cast(u128, 0xfffffffffffff)));
    const x28 = (cast(u128, x23) + (cast(u128, x1) * cast(u128, (arg1[4]))));
    const x29 = cast(u64, (x28 >> 64));
    const x30 = cast(u64, (x28 & cast(u128, 0xffffffffffffffff)));
    const x31 = ((cast(u128, x26) + ((cast(u128, x4) * cast(u128, (arg1[2]))) + (cast(u128, (arg1[1])) * cast(u128, (arg1[1]))))) + (cast(u128, x30) * cast(u128, 0x1000003d10)));
    const x32 = cast(u64, (x31 >> 52));
    const x33 = cast(u64, (x31 & cast(u128, 0xfffffffffffff)));
    const x34 = (cast(u128, (x32 + x10)) + (cast(u128, x29) * cast(u128, 0x1000003d10000)));
    const x35 = cast(u64, (x34 >> 52));
    const x36 = cast(u64, (x34 & cast(u128, 0xfffffffffffff)));
    const x37 = (x35 + x15);
    out1[0] = x21;
    out1[1] = x27;
    out1[2] = x33;
    out1[3] = x36;
    out1[4] = x37;
}
