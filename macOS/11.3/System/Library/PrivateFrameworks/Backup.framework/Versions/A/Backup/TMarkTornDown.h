/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TMarkTornDown <NSObject>
@property (getter=isTornDown) BOOL tornDown; 
@optional
-(void)aboutToTearDown;

@required
-(BOOL)isTornDown;
-(void)setTornDown:(BOOL)arg1;

@end
