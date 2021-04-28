/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSColor, NSArray, NSDictionary, NSString;

@interface _NSToolbarAuxiliary : NSObject {

	NSColor* backgroundColor;
	NSArray* draggedTypes;
	double windowOriginOffsetWhenHidingHint;
	_NSToolbarMetrics* savedMetrics;
	NSDictionary* identifiedItems;
	NSArray* defaultItems;
	NSArray* allowedItems;
	NSArray* selectableItems;
	NSString* centeredItemIdentifier;
	double preferredPrincipalWidthRatio;
	double minimumInlineWindowTitleWidth;
	struct {
		unsigned wiringNibConnections : 1;
		unsigned firstMoveableItemIndex : 6;
		unsigned userInterfaceLayoutDirectionOverride : 1;
		unsigned isPaletteToolbar : 1;
		unsigned bezeled : 1;
		unsigned overflowMenuUsesAllItems : 1;
		unsigned reserved : 22;
	}  _tbaFlags;
	unsigned short _fullScreenAuxiliaryViewForceVisibleCounter;
	double auxMinHeight;
	double auxMaxHeight;
	double autohideHeight;
	unsigned long long originalAutoresizingMask;
	long long _toolbarUserInterfaceLayoutDirection;
	NSString* _toolbarDragToken;

}
@end
