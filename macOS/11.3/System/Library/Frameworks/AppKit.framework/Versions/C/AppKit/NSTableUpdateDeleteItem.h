/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTableUpdateItem2.h>

@class NSTableRowView;

@interface NSTableUpdateDeleteItem : NSTableUpdateItem2 {

	NSTableRowView* _viewToDelete;

}

@property (nonatomic,retain) NSTableRowView * viewToDelete;              //@synthesize viewToDelete=_viewToDelete - In the implementation block
-(void)dealloc;
-(NSTableRowView *)viewToDelete;
-(void)setViewToDelete:(NSTableRowView *)arg1 ;
@end

