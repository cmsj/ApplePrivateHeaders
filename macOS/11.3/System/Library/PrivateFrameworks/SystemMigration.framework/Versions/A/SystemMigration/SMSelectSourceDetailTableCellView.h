/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class SMSelectSourceDetailTableDelegate;

@interface SMSelectSourceDetailTableCellView : NSTableCellView {

	char selected;
	SMSelectSourceDetailTableDelegate* _tableDelegate;

}

@property (assign) char selected; 
@property (assign) SMSelectSourceDetailTableDelegate * tableDelegate;              //@synthesize tableDelegate=_tableDelegate - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)selected;
-(void)setSelected:(char)arg1 ;
-(void)setTableDelegate:(SMSelectSourceDetailTableDelegate *)arg1 ;
-(SMSelectSourceDetailTableDelegate *)tableDelegate;
@end

