/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSAKit/OSAKit-Structs.h>
#import <AppKit/NSBrowserCell.h>

@class NSDictionary, OSADefinition;

@interface OSABrowserCell : NSBrowserCell {

	NSDictionary* _item;
	OSADefinition* _definition;

}
-(void)dealloc;
-(void)setItem:(id)arg1 ;
-(id)item;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)definition;
-(void)setDefinition:(id)arg1 ;
@end

