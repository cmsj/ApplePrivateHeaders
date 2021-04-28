/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSToolbarDelegate.h>

@interface SwiftUI.AppKitToolbarCoordinator : NSObject <NSToolbarDelegate> {

	 lastPreferenceSeed;
	 itemIDs;
	 items;
	 vendedItems;
	 selection;
	 currentFocusedValues;
	 $__lazy_storage_$_defaultToolbarId;

}
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(id)toolbarSelectableItemIdentifiers:(id)arg1 ;
-(id)init;
-(void)updateSelection:(id)arg1 ;
@end
