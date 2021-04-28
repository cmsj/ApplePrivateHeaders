/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCell;

@interface _NSCellTrackingData : NSObject {

	NSCell* _mouseCell;
	long long _mouseRow;
	long long _mouseCol;
	char _cellNeedsDisplay;

}

@property (assign) long long mouseRow;                        //@synthesize mouseRow=_mouseRow - In the implementation block
@property (assign) long long mouseCol;                        //@synthesize mouseCol=_mouseCol - In the implementation block
@property (nonatomic,retain) NSCell * mouseCell;              //@synthesize mouseCell=_mouseCell - In the implementation block
@property (assign) char cellNeedsDisplay;                     //@synthesize cellNeedsDisplay=_cellNeedsDisplay - In the implementation block
-(long long)mouseRow;
-(void)setMouseRow:(long long)arg1 ;
-(long long)mouseCol;
-(void)setMouseCol:(long long)arg1 ;
-(NSCell *)mouseCell;
-(void)setMouseCell:(NSCell *)arg1 ;
-(char)cellNeedsDisplay;
-(void)setCellNeedsDisplay:(char)arg1 ;
@end
