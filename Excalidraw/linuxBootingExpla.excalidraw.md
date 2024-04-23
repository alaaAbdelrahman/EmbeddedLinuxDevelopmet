---

excalidraw-plugin: parsed
tags: [excalidraw]

---
==⚠  Switch to EXCALIDRAW VIEW in the MORE OPTIONS menu of this document. ⚠==


# Text Elements
u-boot ^ExGQPfql

call  ^09Fgmybw

kerenl_entry( 0 , machid ,r2 ^5UUiqIk7

at this u-boot is actual
 handing off control to linux kerenl  ^NY03Oi7W

How this happen--> let's see
u-boot strap loader

in the file /arch/arm/lib/bootm.c
 ^viHd0bmE

  ^CXjF9iiB

where code
to read linux 
kernel from memory ^5rPPpnrE

operations ^SQxwaEvX

verify the checksum ^wZvN1I5V

handing off control is implemented ^P9hgry3J

boot_jump_linux() ^VR6omUkY

assign function pointer kernel_entry to entry point of os   ^64HOpDCl

storing the value of 
fdt_addr in r2 ^QFabcUB0

%%
# Drawing
```json
{
	"type": "excalidraw",
	"version": 2,
	"source": "https://github.com/zsviczian/obsidian-excalidraw-plugin/releases/tag/2.1.4",
	"elements": [
		{
			"type": "ellipse",
			"version": 80,
			"versionNonce": 1755513583,
			"isDeleted": false,
			"id": "rqqgfhtNbipuqUB_3_1S6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -443.54998779296875,
			"y": -211.46250915527344,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 107.99999999999999,
			"height": 85,
			"seed": 1146085229,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ExGQPfql"
				},
				{
					"id": "wM-owb9iFLvCnSltJSfT5",
					"type": "arrow"
				}
			],
			"updated": 1713742019719,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 22,
			"versionNonce": 691414913,
			"isDeleted": false,
			"id": "ExGQPfql",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -421.3337143041908,
			"y": -181.51454735570172,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 63.199920654296875,
			"height": 25,
			"seed": 1629341891,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1713742019719,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "u-boot",
			"rawText": "u-boot",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "rqqgfhtNbipuqUB_3_1S6",
			"originalText": "u-boot",
			"lineHeight": 1.25
		},
		{
			"type": "rectangle",
			"version": 148,
			"versionNonce": 1245891855,
			"isDeleted": false,
			"id": "-nPEBK2EnMnQBkXq2gVd-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -242.74993896484375,
			"y": -186.66250610351562,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 335.20001220703125,
			"height": 44.79998779296875,
			"seed": 1381427203,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "wM-owb9iFLvCnSltJSfT5",
					"type": "arrow"
				}
			],
			"updated": 1713742019720,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 198,
			"versionNonce": 728271215,
			"isDeleted": false,
			"id": "wM-owb9iFLvCnSltJSfT5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -330.7534113973319,
			"y": -165.82901160648998,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 83.20342360436311,
			"height": 0.6503614081745468,
			"seed": 1972870477,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1713742523727,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "rqqgfhtNbipuqUB_3_1S6",
				"gap": 4.925337502507084,
				"focus": 0.06291249376856912
			},
			"endBinding": {
				"elementId": "-nPEBK2EnMnQBkXq2gVd-",
				"gap": 4.800048828125,
				"focus": -0.018196123267899877
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					83.20342360436311,
					0.6503614081745468
				]
			]
		},
		{
			"type": "text",
			"version": 23,
			"versionNonce": 363090735,
			"isDeleted": false,
			"id": "09Fgmybw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -303.54998779296875,
			"y": -193.0625,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 43.89994812011719,
			"height": 25,
			"seed": 527941805,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1713742019720,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "call ",
			"rawText": "call ",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "call ",
			"lineHeight": 1.25
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 1138817857,
			"isDeleted": false,
			"id": "5UUiqIk7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -194.75,
			"y": -178.26251220703125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 277.75970458984375,
			"height": 25,
			"seed": 1849858467,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1713742019720,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "kerenl_entry( 0 , machid ,r2",
			"rawText": "kerenl_entry( 0 , machid ,r2",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "kerenl_entry( 0 , machid ,r2",
			"lineHeight": 1.25
		},
		{
			"type": "text",
			"version": 117,
			"versionNonce": 590353743,
			"isDeleted": false,
			"id": "NY03Oi7W",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -228.35003662109375,
			"y": -131.46249389648438,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 353.67962646484375,
			"height": 50,
			"seed": 1994093539,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1713742019720,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "at this u-boot is actual\n handing off control to linux kerenl ",
			"rawText": "at this u-boot is actual\n handing off control to linux kerenl ",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "at this u-boot is actual\n handing off control to linux kerenl ",
			"lineHeight": 1.25
		},
		{
			"type": "rectangle",
			"version": 69,
			"versionNonce": 2005003041,
			"isDeleted": false,
			"id": "ODahjMtIQxpPlwUEhYqjw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -457.9499816894531,
			"y": -259.46250915527344,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 614.3999938964844,
			"height": 237.59999084472656,
			"seed": 717242723,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1713742019720,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 103,
			"versionNonce": 708744047,
			"isDeleted": false,
			"id": "viHd0bmE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -353.75,
			"y": 6.137481689453125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 314.1996154785156,
			"height": 125,
			"seed": 163605379,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1713742019720,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "How this happen--> let's see\nu-boot strap loader\n\nin the file /arch/arm/lib/bootm.c\n",
			"rawText": "How this happen--> let's see\nu-boot strap loader\n\nin the file /arch/arm/lib/bootm.c\n",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "How this happen--> let's see\nu-boot strap loader\n\nin the file /arch/arm/lib/bootm.c\n",
			"lineHeight": 1.25
		},
		{
			"type": "text",
			"version": 3,
			"versionNonce": 221896449,
			"isDeleted": false,
			"id": "CXjF9iiB",
			"fillStyle": "hachure",
			"strokeWidth": 1,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -97.75,
			"y": 96.13748168945312,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 9.999984741210938,
			"height": 25,
			"seed": 14161,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1713742019720,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": " ",
			"rawText": " ",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": " ",
			"lineHeight": 1.25
		},
		{
			"type": "rectangle",
			"version": 74,
			"versionNonce": 1662537103,
			"isDeleted": false,
			"id": "MMXROgPQx4Eyb0DDRIXbQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -251.54998779296875,
			"y": 74.93746948242188,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 221.5999755859375,
			"height": 35.20001220703125,
			"seed": 795677827,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "KheGXoWQNc-2rYKZGMJua",
					"type": "arrow"
				},
				{
					"id": "KEwHwx2l1_vf9Kdw50eEN",
					"type": "arrow"
				}
			],
			"updated": 1713742019720,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 70,
			"versionNonce": 864573153,
			"isDeleted": false,
			"id": "KheGXoWQNc-2rYKZGMJua",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -165.14996337890625,
			"y": 115.73751831054688,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 101.5999755859375,
			"height": 114.39996337890625,
			"seed": 984038253,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1713742019720,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "MMXROgPQx4Eyb0DDRIXbQ",
				"focus": 0.3559592417046762,
				"gap": 5.60003662109375
			},
			"endBinding": {
				"elementId": "-YmOyOegMEKRzzaqgu5wh",
				"focus": -0.6792612972923838,
				"gap": 9.5999755859375
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					101.5999755859375,
					114.39996337890625
				]
			]
		},
		{
			"type": "rectangle",
			"version": 70,
			"versionNonce": 1760936879,
			"isDeleted": false,
			"id": "-YmOyOegMEKRzzaqgu5wh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -53.95001220703125,
			"y": 173.33749389648438,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 209.60003662109378,
			"height": 125.5999755859375,
			"seed": 220239203,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "KheGXoWQNc-2rYKZGMJua",
					"type": "arrow"
				}
			],
			"updated": 1713742019720,
			"link": null,
			"locked": false
		},
		{
			"id": "5rPPpnrE",
			"type": "text",
			"x": -38.75,
			"y": 192.3374816894531,
			"width": 182.19979858398438,
			"height": 75,
			"angle": 0,
			"strokeColor": "#1971c2",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1835052175,
			"version": 73,
			"versionNonce": 486331073,
			"isDeleted": false,
			"boundElements": [
				{
					"id": "LLbgAgeI8oglV1muvdISs",
					"type": "arrow"
				}
			],
			"updated": 1713742019720,
			"link": null,
			"locked": false,
			"text": "where code\nto read linux \nkernel from memory",
			"rawText": "where code\nto read linux \nkernel from memory",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "where code\nto read linux \nkernel from memory",
			"lineHeight": 1.25
		},
		{
			"id": "SQxwaEvX",
			"type": "text",
			"x": -147.14996337890625,
			"y": 145.53756713867188,
			"width": 100.77987670898438,
			"height": 25,
			"angle": 0.8263381868288491,
			"strokeColor": "#846358",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 589528417,
			"version": 109,
			"versionNonce": 729330337,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742087103,
			"link": null,
			"locked": false,
			"text": "operations",
			"rawText": "operations",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "operations",
			"lineHeight": 1.25
		},
		{
			"id": "KEwHwx2l1_vf9Kdw50eEN",
			"type": "arrow",
			"x": -165.14996337890625,
			"y": 118.13748168945312,
			"width": 62.4000244140625,
			"height": 216.79998779296875,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 820910593,
			"version": 95,
			"versionNonce": 952720993,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742019721,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-0.800048828125,
					155.20001220703125
				],
				[
					61.5999755859375,
					216.79998779296875
				]
			],
			"lastCommittedPoint": null,
			"startBinding": {
				"elementId": "MMXROgPQx4Eyb0DDRIXbQ",
				"focus": 0.21884606425289005,
				"gap": 8
			},
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"id": "ZMhTlnSlC5rREosraS1J9",
			"type": "rectangle",
			"x": -73.1500244140625,
			"y": 319.7375183105469,
			"width": 212.79998779296875,
			"height": 68,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"seed": 2087079567,
			"version": 88,
			"versionNonce": 790236673,
			"isDeleted": false,
			"boundElements": [
				{
					"type": "text",
					"id": "wZvN1I5V"
				}
			],
			"updated": 1713742019721,
			"link": null,
			"locked": false
		},
		{
			"id": "wZvN1I5V",
			"type": "text",
			"x": -62.30992126464844,
			"y": 341.2375183105469,
			"width": 191.11978149414062,
			"height": 25,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1634905281,
			"version": 71,
			"versionNonce": 1940974145,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742019721,
			"link": null,
			"locked": false,
			"text": "verify the checksum",
			"rawText": "verify the checksum",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ZMhTlnSlC5rREosraS1J9",
			"originalText": "verify the checksum",
			"lineHeight": 1.25
		},
		{
			"id": "LLbgAgeI8oglV1muvdISs",
			"type": "arrow",
			"x": 158.85003662109375,
			"y": 232.80154712600972,
			"width": 182.40008544921875,
			"height": 0.7707681474139463,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 567247265,
			"version": 242,
			"versionNonce": 1419393455,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742523728,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					182.40008544921875,
					0.7707681474139463
				]
			],
			"lastCommittedPoint": null,
			"startBinding": {
				"elementId": "5rPPpnrE",
				"gap": 15.400238037109375,
				"focus": 0.06601862097440453
			},
			"endBinding": {
				"elementId": "8kMjM_gmb8dSIbxVlFwAM",
				"gap": 15.2000732421875,
				"focus": 0.4188104584774646
			},
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"id": "Zz2xaKUoPxl1RV231Tmds",
			"type": "line",
			"x": 231.6500244140625,
			"y": 242.13748168945312,
			"width": 88,
			"height": 112.79998779296875,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 663397857,
			"version": 69,
			"versionNonce": 1692837217,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742027747,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-0.800048828125,
					92
				],
				[
					-88,
					112.79998779296875
				]
			],
			"lastCommittedPoint": null,
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": null
		},
		{
			"id": "8kMjM_gmb8dSIbxVlFwAM",
			"type": "rectangle",
			"x": 356.4501953125,
			"y": 190.13748168945312,
			"width": 146.4000244140625,
			"height": 151.20001220703122,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"seed": 1519210817,
			"version": 123,
			"versionNonce": 1735431151,
			"isDeleted": false,
			"boundElements": [
				{
					"type": "text",
					"id": "P9hgry3J"
				},
				{
					"id": "LLbgAgeI8oglV1muvdISs",
					"type": "arrow"
				}
			],
			"updated": 1713742351002,
			"link": null,
			"locked": false
		},
		{
			"id": "P9hgry3J",
			"type": "text",
			"x": 374.8202667236328,
			"y": 228.23748779296875,
			"width": 109.65988159179688,
			"height": 75,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 414637327,
			"version": 113,
			"versionNonce": 1891321423,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742351002,
			"link": null,
			"locked": false,
			"text": "handing off\ncontrol is\nimplemented",
			"rawText": "handing off control is implemented",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "8kMjM_gmb8dSIbxVlFwAM",
			"originalText": "handing off control is implemented",
			"lineHeight": 1.25
		},
		{
			"id": "lCzjfCdK6cxHK_nf9Jl6Y",
			"type": "line",
			"x": -32.3499755859375,
			"y": 90.93746948242188,
			"width": 112.00006103515625,
			"height": 59.199981689453125,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 1035913793,
			"version": 80,
			"versionNonce": 2139774511,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742110979,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					21.5999755859375,
					-52.79998779296875
				],
				[
					112.00006103515625,
					-59.199981689453125
				]
			],
			"lastCommittedPoint": null,
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": null
		},
		{
			"id": "QLo1FUhg5eWoTejdYuBkw",
			"type": "rectangle",
			"x": 84.45007324218744,
			"y": 1.337493896484375,
			"width": 217.60009765625006,
			"height": 64.79998779296875,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"seed": 438091855,
			"version": 71,
			"versionNonce": 1670050383,
			"isDeleted": false,
			"boundElements": [
				{
					"type": "text",
					"id": "VR6omUkY"
				},
				{
					"id": "w07Z8Y-W8UnGqbdVID-jv",
					"type": "arrow"
				},
				{
					"id": "2tc5AVa2qMtN3xENkfUoH",
					"type": "arrow"
				}
			],
			"updated": 1713742267352,
			"link": null,
			"locked": false
		},
		{
			"id": "VR6omUkY",
			"type": "text",
			"x": 106.38021087646482,
			"y": 21.23748779296875,
			"width": 173.7398223876953,
			"height": 25,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 2022798817,
			"version": 40,
			"versionNonce": 1174617313,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742163213,
			"link": null,
			"locked": false,
			"text": "boot_jump_linux()",
			"rawText": "boot_jump_linux()",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "QLo1FUhg5eWoTejdYuBkw",
			"originalText": "boot_jump_linux()",
			"lineHeight": 1.25
		},
		{
			"id": "w07Z8Y-W8UnGqbdVID-jv",
			"type": "arrow",
			"x": 303.05017089843756,
			"y": 8.494576590401778,
			"width": 59.79980468749994,
			"height": 55.95710100446427,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 732868559,
			"version": 101,
			"versionNonce": 689554447,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742523730,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					55.79980468749994,
					-11.957101004464278
				],
				[
					59.79980468749994,
					-55.95710100446427
				]
			],
			"lastCommittedPoint": null,
			"startBinding": {
				"elementId": "QLo1FUhg5eWoTejdYuBkw",
				"gap": 1,
				"focus": -0.030770010863474317
			},
			"endBinding": {
				"elementId": "pzKrMjuhNWFspFzd23XDC",
				"gap": 14.199981689453125,
				"focus": -0.10074301765081911
			},
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"id": "pzKrMjuhNWFspFzd23XDC",
			"type": "rectangle",
			"x": 241.25,
			"y": -146.66250610351562,
			"width": 229.5999755859375,
			"height": 85,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"seed": 982371393,
			"version": 38,
			"versionNonce": 1121143393,
			"isDeleted": false,
			"boundElements": [
				{
					"type": "text",
					"id": "64HOpDCl"
				},
				{
					"id": "w07Z8Y-W8UnGqbdVID-jv",
					"type": "arrow"
				}
			],
			"updated": 1713742255246,
			"link": null,
			"locked": false
		},
		{
			"id": "64HOpDCl",
			"type": "text",
			"x": 250.73011779785156,
			"y": -141.66250610351562,
			"width": 210.63973999023438,
			"height": 75,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1602019265,
			"version": 91,
			"versionNonce": 217375823,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742237856,
			"link": null,
			"locked": false,
			"text": "assign function\npointer kernel_entry\nto entry point of os ",
			"rawText": "assign function pointer kernel_entry to entry point of os  ",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "pzKrMjuhNWFspFzd23XDC",
			"originalText": "assign function pointer kernel_entry to entry point of os  ",
			"lineHeight": 1.25
		},
		{
			"id": "2tc5AVa2qMtN3xENkfUoH",
			"type": "arrow",
			"x": 305.2501220703125,
			"y": 18.137481689453132,
			"width": 76.08576019733397,
			"height": 34.399993896484375,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 1309284705,
			"version": 176,
			"versionNonce": 210004527,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742523731,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					61.599853515625,
					0.8000183105468679
				],
				[
					76.08576019733397,
					34.399993896484375
				]
			],
			"lastCommittedPoint": null,
			"startBinding": {
				"elementId": "QLo1FUhg5eWoTejdYuBkw",
				"gap": 3.199951171875,
				"focus": -0.5043793692127083
			},
			"endBinding": {
				"elementId": "UDmAjt5Al21LTbnzroxe7",
				"gap": 12.800018310546875,
				"focus": 0.05590971400000165
			},
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"id": "UDmAjt5Al21LTbnzroxe7",
			"type": "rectangle",
			"x": 296.4500732421875,
			"y": 65.33749389648438,
			"width": 204,
			"height": 85,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"seed": 892719215,
			"version": 119,
			"versionNonce": 582218561,
			"isDeleted": false,
			"boundElements": [
				{
					"id": "2tc5AVa2qMtN3xENkfUoH",
					"type": "arrow"
				},
				{
					"type": "text",
					"id": "QFabcUB0"
				}
			],
			"updated": 1713742333337,
			"link": null,
			"locked": false
		},
		{
			"id": "QFabcUB0",
			"type": "text",
			"x": 313.92017364501953,
			"y": 70.33749389648438,
			"width": 169.05979919433594,
			"height": 75,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1024111201,
			"version": 85,
			"versionNonce": 1645828417,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1713742332199,
			"link": null,
			"locked": false,
			"text": "storing the value\nof\nfdt_addr in r2",
			"rawText": "storing the value of \nfdt_addr in r2",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "UDmAjt5Al21LTbnzroxe7",
			"originalText": "storing the value of \nfdt_addr in r2",
			"lineHeight": 1.25
		},
		{
			"id": "Rca_xcriQWXEwbJgyT-kK",
			"type": "image",
			"x": -492.47980761346014,
			"y": -156.96255493164062,
			"width": 706.3236950590409,
			"height": 557.4000244140625,
			"angle": 0,
			"strokeColor": "transparent",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 978009743,
			"version": 270,
			"versionNonce": 79672385,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1713742630017,
			"link": null,
			"locked": false,
			"status": "pending",
			"fileId": "1cca6a3c75ccc8cf9e931f64557d6b6bcd2f4cbd",
			"scale": [
				1,
				1
			]
		},
		{
			"id": "5HmmtotU",
			"type": "text",
			"x": -67.75,
			"y": 154.13748168945312,
			"width": 9.999984741210938,
			"height": 25,
			"angle": 0,
			"strokeColor": "#846358",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1154690817,
			"version": 6,
			"versionNonce": 1543468495,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1713742019720,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "",
			"lineHeight": 1.25
		},
		{
			"id": "WIdNnzG8",
			"type": "text",
			"x": -6.75,
			"y": 138.13748168945312,
			"width": 9.999984741210938,
			"height": 25,
			"angle": 0,
			"strokeColor": "#846358",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1013145089,
			"version": 4,
			"versionNonce": 2117522081,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1713742019721,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "",
			"lineHeight": 1.25
		},
		{
			"id": "12WFb9GL",
			"type": "text",
			"x": 19.6500244140625,
			"y": -304.26251220703125,
			"width": 9.999984741210938,
			"height": 25,
			"angle": 0,
			"strokeColor": "#846358",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1359601345,
			"version": 4,
			"versionNonce": 1273353857,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1713742019721,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "",
			"lineHeight": 1.25
		},
		{
			"id": "OFgMtIGZ",
			"type": "text",
			"x": 325.25,
			"y": -253.86251831054688,
			"width": 9.999984741210938,
			"height": 25,
			"angle": 0,
			"strokeColor": "#846358",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 992363023,
			"version": 4,
			"versionNonce": 787058191,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1713742019721,
			"link": null,
			"locked": false,
			"text": "",
			"rawText": "",
			"fontSize": 20,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "",
			"lineHeight": 1.25
		},
		{
			"id": "Ra1RVwCtj-jYluP65FrTC",
			"type": "arrow",
			"x": -167.54998779296875,
			"y": 146.13748168945312,
			"width": 135.20001220703125,
			"height": 118.4000244140625,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 942772545,
			"version": 178,
			"versionNonce": 198874703,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1713742019721,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-135.20001220703125,
					118.4000244140625
				]
			],
			"lastCommittedPoint": null,
			"startBinding": {
				"elementId": "viHd0bmE",
				"focus": -0.5147188833794768,
				"gap": 15
			},
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"id": "jrR432CZD3WKPuNa-3Iq9",
			"type": "arrow",
			"x": 142.85003662109375,
			"y": 356.5375061035156,
			"width": 82.39996337890625,
			"height": 118.4000244140625,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 1065698849,
			"version": 85,
			"versionNonce": 2079388783,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1713742019721,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					82.39996337890625,
					-118.4000244140625
				]
			],
			"lastCommittedPoint": null,
			"startBinding": {
				"elementId": "ZMhTlnSlC5rREosraS1J9",
				"focus": 0.8576570049911405,
				"gap": 3.2000732421875
			},
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": "arrow"
		}
	],
	"appState": {
		"theme": "dark",
		"viewBackgroundColor": "#ffffff",
		"currentItemStrokeColor": "#1e1e1e",
		"currentItemBackgroundColor": "transparent",
		"currentItemFillStyle": "solid",
		"currentItemStrokeWidth": 2,
		"currentItemStrokeStyle": "solid",
		"currentItemRoughness": 1,
		"currentItemOpacity": 100,
		"currentItemFontFamily": 1,
		"currentItemFontSize": 20,
		"currentItemTextAlign": "left",
		"currentItemStartArrowhead": null,
		"currentItemEndArrowhead": "arrow",
		"scrollX": 616.25,
		"scrollY": 379.7375183105469,
		"zoom": {
			"value": 1
		},
		"currentItemRoundness": "round",
		"gridSize": null,
		"gridColor": {
			"Bold": "#C9C9C9FF",
			"Regular": "#EDEDEDFF"
		},
		"colorPalette": {},
		"currentStrokeOptions": null,
		"previousGridSize": null,
		"frameRendering": {
			"enabled": true,
			"clip": true,
			"name": true,
			"outline": true
		}
	},
	"files": {}
}
```
%%