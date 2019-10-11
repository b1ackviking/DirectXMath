//-------------------------------------------------------------------------------------
// DirectXColors.h -- C++ Color Math library
//
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
//
// http://go.microsoft.com/fwlink/?LinkID=615560
//-------------------------------------------------------------------------------------

#pragma once

#include "DirectXMath.h"

// NOTE: did not use "namespace DirectX::Colors" syntax to stay with C++14

namespace DirectX
{

namespace Colors
{
    // Standard colors (Red/Green/Blue/Alpha)
    constexpr XMVECTORF32 AliceBlue            = { { { 0.941176534f, 0.972549081f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 AntiqueWhite         = { { { 0.980392218f, 0.921568692f, 0.843137324f, 1.000000000f } } };
    constexpr XMVECTORF32 Aqua                 = { { { 0.000000000f, 1.000000000f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 Aquamarine           = { { { 0.498039246f, 1.000000000f, 0.831372619f, 1.000000000f } } };
    constexpr XMVECTORF32 Azure                = { { { 0.941176534f, 1.000000000f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 Beige                = { { { 0.960784376f, 0.960784376f, 0.862745166f, 1.000000000f } } };
    constexpr XMVECTORF32 Bisque               = { { { 1.000000000f, 0.894117713f, 0.768627524f, 1.000000000f } } };
    constexpr XMVECTORF32 Black                = { { { 0.000000000f, 0.000000000f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 BlanchedAlmond       = { { { 1.000000000f, 0.921568692f, 0.803921640f, 1.000000000f } } };
    constexpr XMVECTORF32 Blue                 = { { { 0.000000000f, 0.000000000f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 BlueViolet           = { { { 0.541176498f, 0.168627456f, 0.886274576f, 1.000000000f } } };
    constexpr XMVECTORF32 Brown                = { { { 0.647058845f, 0.164705887f, 0.164705887f, 1.000000000f } } };
    constexpr XMVECTORF32 BurlyWood            = { { { 0.870588303f, 0.721568644f, 0.529411793f, 1.000000000f } } };
    constexpr XMVECTORF32 CadetBlue            = { { { 0.372549027f, 0.619607866f, 0.627451003f, 1.000000000f } } };
    constexpr XMVECTORF32 Chartreuse           = { { { 0.498039246f, 1.000000000f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 Chocolate            = { { { 0.823529482f, 0.411764741f, 0.117647067f, 1.000000000f } } };
    constexpr XMVECTORF32 Coral                = { { { 1.000000000f, 0.498039246f, 0.313725501f, 1.000000000f } } };
    constexpr XMVECTORF32 CornflowerBlue       = { { { 0.392156899f, 0.584313750f, 0.929411829f, 1.000000000f } } };
    constexpr XMVECTORF32 Cornsilk             = { { { 1.000000000f, 0.972549081f, 0.862745166f, 1.000000000f } } };
    constexpr XMVECTORF32 Crimson              = { { { 0.862745166f, 0.078431375f, 0.235294133f, 1.000000000f } } };
    constexpr XMVECTORF32 Cyan                 = { { { 0.000000000f, 1.000000000f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkBlue             = { { { 0.000000000f, 0.000000000f, 0.545098066f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkCyan             = { { { 0.000000000f, 0.545098066f, 0.545098066f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkGoldenrod        = { { { 0.721568644f, 0.525490224f, 0.043137256f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkGray             = { { { 0.662745118f, 0.662745118f, 0.662745118f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkGreen            = { { { 0.000000000f, 0.392156899f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkKhaki            = { { { 0.741176486f, 0.717647076f, 0.419607878f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkMagenta          = { { { 0.545098066f, 0.000000000f, 0.545098066f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkOliveGreen       = { { { 0.333333343f, 0.419607878f, 0.184313729f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkOrange           = { { { 1.000000000f, 0.549019635f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkOrchid           = { { { 0.600000024f, 0.196078449f, 0.800000072f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkRed              = { { { 0.545098066f, 0.000000000f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkSalmon           = { { { 0.913725555f, 0.588235319f, 0.478431404f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkSeaGreen         = { { { 0.560784340f, 0.737254918f, 0.545098066f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkSlateBlue        = { { { 0.282352954f, 0.239215702f, 0.545098066f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkSlateGray        = { { { 0.184313729f, 0.309803933f, 0.309803933f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkTurquoise        = { { { 0.000000000f, 0.807843208f, 0.819607913f, 1.000000000f } } };
    constexpr XMVECTORF32 DarkViolet           = { { { 0.580392182f, 0.000000000f, 0.827451050f, 1.000000000f } } };
    constexpr XMVECTORF32 DeepPink             = { { { 1.000000000f, 0.078431375f, 0.576470613f, 1.000000000f } } };
    constexpr XMVECTORF32 DeepSkyBlue          = { { { 0.000000000f, 0.749019623f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 DimGray              = { { { 0.411764741f, 0.411764741f, 0.411764741f, 1.000000000f } } };
    constexpr XMVECTORF32 DodgerBlue           = { { { 0.117647067f, 0.564705908f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 Firebrick            = { { { 0.698039234f, 0.133333340f, 0.133333340f, 1.000000000f } } };
    constexpr XMVECTORF32 FloralWhite          = { { { 1.000000000f, 0.980392218f, 0.941176534f, 1.000000000f } } };
    constexpr XMVECTORF32 ForestGreen          = { { { 0.133333340f, 0.545098066f, 0.133333340f, 1.000000000f } } };
    constexpr XMVECTORF32 Fuchsia              = { { { 1.000000000f, 0.000000000f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 Gainsboro            = { { { 0.862745166f, 0.862745166f, 0.862745166f, 1.000000000f } } };
    constexpr XMVECTORF32 GhostWhite           = { { { 0.972549081f, 0.972549081f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 Gold                 = { { { 1.000000000f, 0.843137324f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 Goldenrod            = { { { 0.854902029f, 0.647058845f, 0.125490203f, 1.000000000f } } };
    constexpr XMVECTORF32 Gray                 = { { { 0.501960814f, 0.501960814f, 0.501960814f, 1.000000000f } } };
    constexpr XMVECTORF32 Green                = { { { 0.000000000f, 0.501960814f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 GreenYellow          = { { { 0.678431392f, 1.000000000f, 0.184313729f, 1.000000000f } } };
    constexpr XMVECTORF32 Honeydew             = { { { 0.941176534f, 1.000000000f, 0.941176534f, 1.000000000f } } };
    constexpr XMVECTORF32 HotPink              = { { { 1.000000000f, 0.411764741f, 0.705882370f, 1.000000000f } } };
    constexpr XMVECTORF32 IndianRed            = { { { 0.803921640f, 0.360784322f, 0.360784322f, 1.000000000f } } };
    constexpr XMVECTORF32 Indigo               = { { { 0.294117659f, 0.000000000f, 0.509803951f, 1.000000000f } } };
    constexpr XMVECTORF32 Ivory                = { { { 1.000000000f, 1.000000000f, 0.941176534f, 1.000000000f } } };
    constexpr XMVECTORF32 Khaki                = { { { 0.941176534f, 0.901960850f, 0.549019635f, 1.000000000f } } };
    constexpr XMVECTORF32 Lavender             = { { { 0.901960850f, 0.901960850f, 0.980392218f, 1.000000000f } } };
    constexpr XMVECTORF32 LavenderBlush        = { { { 1.000000000f, 0.941176534f, 0.960784376f, 1.000000000f } } };
    constexpr XMVECTORF32 LawnGreen            = { { { 0.486274540f, 0.988235354f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 LemonChiffon         = { { { 1.000000000f, 0.980392218f, 0.803921640f, 1.000000000f } } };
    constexpr XMVECTORF32 LightBlue            = { { { 0.678431392f, 0.847058892f, 0.901960850f, 1.000000000f } } };
    constexpr XMVECTORF32 LightCoral           = { { { 0.941176534f, 0.501960814f, 0.501960814f, 1.000000000f } } };
    constexpr XMVECTORF32 LightCyan            = { { { 0.878431439f, 1.000000000f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 LightGoldenrodYellow = { { { 0.980392218f, 0.980392218f, 0.823529482f, 1.000000000f } } };
    constexpr XMVECTORF32 LightGreen           = { { { 0.564705908f, 0.933333397f, 0.564705908f, 1.000000000f } } };
    constexpr XMVECTORF32 LightGray            = { { { 0.827451050f, 0.827451050f, 0.827451050f, 1.000000000f } } };
    constexpr XMVECTORF32 LightPink            = { { { 1.000000000f, 0.713725507f, 0.756862819f, 1.000000000f } } };
    constexpr XMVECTORF32 LightSalmon          = { { { 1.000000000f, 0.627451003f, 0.478431404f, 1.000000000f } } };
    constexpr XMVECTORF32 LightSeaGreen        = { { { 0.125490203f, 0.698039234f, 0.666666687f, 1.000000000f } } };
    constexpr XMVECTORF32 LightSkyBlue         = { { { 0.529411793f, 0.807843208f, 0.980392218f, 1.000000000f } } };
    constexpr XMVECTORF32 LightSlateGray       = { { { 0.466666698f, 0.533333361f, 0.600000024f, 1.000000000f } } };
    constexpr XMVECTORF32 LightSteelBlue       = { { { 0.690196097f, 0.768627524f, 0.870588303f, 1.000000000f } } };
    constexpr XMVECTORF32 LightYellow          = { { { 1.000000000f, 1.000000000f, 0.878431439f, 1.000000000f } } };
    constexpr XMVECTORF32 Lime                 = { { { 0.000000000f, 1.000000000f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 LimeGreen            = { { { 0.196078449f, 0.803921640f, 0.196078449f, 1.000000000f } } };
    constexpr XMVECTORF32 Linen                = { { { 0.980392218f, 0.941176534f, 0.901960850f, 1.000000000f } } };
    constexpr XMVECTORF32 Magenta              = { { { 1.000000000f, 0.000000000f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 Maroon               = { { { 0.501960814f, 0.000000000f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 MediumAquamarine     = { { { 0.400000036f, 0.803921640f, 0.666666687f, 1.000000000f } } };
    constexpr XMVECTORF32 MediumBlue           = { { { 0.000000000f, 0.000000000f, 0.803921640f, 1.000000000f } } };
    constexpr XMVECTORF32 MediumOrchid         = { { { 0.729411781f, 0.333333343f, 0.827451050f, 1.000000000f } } };
    constexpr XMVECTORF32 MediumPurple         = { { { 0.576470613f, 0.439215720f, 0.858823597f, 1.000000000f } } };
    constexpr XMVECTORF32 MediumSeaGreen       = { { { 0.235294133f, 0.701960802f, 0.443137288f, 1.000000000f } } };
    constexpr XMVECTORF32 MediumSlateBlue      = { { { 0.482352972f, 0.407843173f, 0.933333397f, 1.000000000f } } };
    constexpr XMVECTORF32 MediumSpringGreen    = { { { 0.000000000f, 0.980392218f, 0.603921592f, 1.000000000f } } };
    constexpr XMVECTORF32 MediumTurquoise      = { { { 0.282352954f, 0.819607913f, 0.800000072f, 1.000000000f } } };
    constexpr XMVECTORF32 MediumVioletRed      = { { { 0.780392230f, 0.082352944f, 0.521568656f, 1.000000000f } } };
    constexpr XMVECTORF32 MidnightBlue         = { { { 0.098039225f, 0.098039225f, 0.439215720f, 1.000000000f } } };
    constexpr XMVECTORF32 MintCream            = { { { 0.960784376f, 1.000000000f, 0.980392218f, 1.000000000f } } };
    constexpr XMVECTORF32 MistyRose            = { { { 1.000000000f, 0.894117713f, 0.882353008f, 1.000000000f } } };
    constexpr XMVECTORF32 Moccasin             = { { { 1.000000000f, 0.894117713f, 0.709803939f, 1.000000000f } } };
    constexpr XMVECTORF32 NavajoWhite          = { { { 1.000000000f, 0.870588303f, 0.678431392f, 1.000000000f } } };
    constexpr XMVECTORF32 Navy                 = { { { 0.000000000f, 0.000000000f, 0.501960814f, 1.000000000f } } };
    constexpr XMVECTORF32 OldLace              = { { { 0.992156923f, 0.960784376f, 0.901960850f, 1.000000000f } } };
    constexpr XMVECTORF32 Olive                = { { { 0.501960814f, 0.501960814f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 OliveDrab            = { { { 0.419607878f, 0.556862772f, 0.137254909f, 1.000000000f } } };
    constexpr XMVECTORF32 Orange               = { { { 1.000000000f, 0.647058845f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 OrangeRed            = { { { 1.000000000f, 0.270588249f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 Orchid               = { { { 0.854902029f, 0.439215720f, 0.839215755f, 1.000000000f } } };
    constexpr XMVECTORF32 PaleGoldenrod        = { { { 0.933333397f, 0.909803987f, 0.666666687f, 1.000000000f } } };
    constexpr XMVECTORF32 PaleGreen            = { { { 0.596078455f, 0.984313786f, 0.596078455f, 1.000000000f } } };
    constexpr XMVECTORF32 PaleTurquoise        = { { { 0.686274529f, 0.933333397f, 0.933333397f, 1.000000000f } } };
    constexpr XMVECTORF32 PaleVioletRed        = { { { 0.858823597f, 0.439215720f, 0.576470613f, 1.000000000f } } };
    constexpr XMVECTORF32 PapayaWhip           = { { { 1.000000000f, 0.937254965f, 0.835294187f, 1.000000000f } } };
    constexpr XMVECTORF32 PeachPuff            = { { { 1.000000000f, 0.854902029f, 0.725490212f, 1.000000000f } } };
    constexpr XMVECTORF32 Peru                 = { { { 0.803921640f, 0.521568656f, 0.247058839f, 1.000000000f } } };
    constexpr XMVECTORF32 Pink                 = { { { 1.000000000f, 0.752941251f, 0.796078503f, 1.000000000f } } };
    constexpr XMVECTORF32 Plum                 = { { { 0.866666734f, 0.627451003f, 0.866666734f, 1.000000000f } } };
    constexpr XMVECTORF32 PowderBlue           = { { { 0.690196097f, 0.878431439f, 0.901960850f, 1.000000000f } } };
    constexpr XMVECTORF32 Purple               = { { { 0.501960814f, 0.000000000f, 0.501960814f, 1.000000000f } } };
    constexpr XMVECTORF32 Red                  = { { { 1.000000000f, 0.000000000f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 RosyBrown            = { { { 0.737254918f, 0.560784340f, 0.560784340f, 1.000000000f } } };
    constexpr XMVECTORF32 RoyalBlue            = { { { 0.254901975f, 0.411764741f, 0.882353008f, 1.000000000f } } };
    constexpr XMVECTORF32 SaddleBrown          = { { { 0.545098066f, 0.270588249f, 0.074509807f, 1.000000000f } } };
    constexpr XMVECTORF32 Salmon               = { { { 0.980392218f, 0.501960814f, 0.447058856f, 1.000000000f } } };
    constexpr XMVECTORF32 SandyBrown           = { { { 0.956862807f, 0.643137276f, 0.376470625f, 1.000000000f } } };
    constexpr XMVECTORF32 SeaGreen             = { { { 0.180392161f, 0.545098066f, 0.341176480f, 1.000000000f } } };
    constexpr XMVECTORF32 SeaShell             = { { { 1.000000000f, 0.960784376f, 0.933333397f, 1.000000000f } } };
    constexpr XMVECTORF32 Sienna               = { { { 0.627451003f, 0.321568638f, 0.176470593f, 1.000000000f } } };
    constexpr XMVECTORF32 Silver               = { { { 0.752941251f, 0.752941251f, 0.752941251f, 1.000000000f } } };
    constexpr XMVECTORF32 SkyBlue              = { { { 0.529411793f, 0.807843208f, 0.921568692f, 1.000000000f } } };
    constexpr XMVECTORF32 SlateBlue            = { { { 0.415686309f, 0.352941185f, 0.803921640f, 1.000000000f } } };
    constexpr XMVECTORF32 SlateGray            = { { { 0.439215720f, 0.501960814f, 0.564705908f, 1.000000000f } } };
    constexpr XMVECTORF32 Snow                 = { { { 1.000000000f, 0.980392218f, 0.980392218f, 1.000000000f } } };
    constexpr XMVECTORF32 SpringGreen          = { { { 0.000000000f, 1.000000000f, 0.498039246f, 1.000000000f } } };
    constexpr XMVECTORF32 SteelBlue            = { { { 0.274509817f, 0.509803951f, 0.705882370f, 1.000000000f } } };
    constexpr XMVECTORF32 Tan                  = { { { 0.823529482f, 0.705882370f, 0.549019635f, 1.000000000f } } };
    constexpr XMVECTORF32 Teal                 = { { { 0.000000000f, 0.501960814f, 0.501960814f, 1.000000000f } } };
    constexpr XMVECTORF32 Thistle              = { { { 0.847058892f, 0.749019623f, 0.847058892f, 1.000000000f } } };
    constexpr XMVECTORF32 Tomato               = { { { 1.000000000f, 0.388235331f, 0.278431386f, 1.000000000f } } };
    constexpr XMVECTORF32 Transparent          = { { { 0.000000000f, 0.000000000f, 0.000000000f, 0.000000000f } } };
    constexpr XMVECTORF32 Turquoise            = { { { 0.250980407f, 0.878431439f, 0.815686345f, 1.000000000f } } };
    constexpr XMVECTORF32 Violet               = { { { 0.933333397f, 0.509803951f, 0.933333397f, 1.000000000f } } };
    constexpr XMVECTORF32 Wheat                = { { { 0.960784376f, 0.870588303f, 0.701960802f, 1.000000000f } } };
    constexpr XMVECTORF32 White                = { { { 1.000000000f, 1.000000000f, 1.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 WhiteSmoke           = { { { 0.960784376f, 0.960784376f, 0.960784376f, 1.000000000f } } };
    constexpr XMVECTORF32 Yellow               = { { { 1.000000000f, 1.000000000f, 0.000000000f, 1.000000000f } } };
    constexpr XMVECTORF32 YellowGreen          = { { { 0.603921592f, 0.803921640f, 0.196078449f, 1.000000000f } } };
} // namespace Colors
} // namespace DirectX
