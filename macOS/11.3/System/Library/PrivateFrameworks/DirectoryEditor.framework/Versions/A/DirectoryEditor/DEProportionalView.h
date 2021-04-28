/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DirectoryEditor.framework/Versions/A/DirectoryEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DirectoryEditor/DirectoryEditor-Structs.h>
#import <AppKit/NSView.h>

@class NSMutableDictionary;

@interface DEProportionalView : NSView {

	NSMutableDictionary* initialSubviewLocationDict;
	char _proportionalOff;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)commonInit;
-(void)setProportionalOff:(char)arg1 ;
@end
