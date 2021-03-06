/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CALURLPublishOperation.h>

@class CalFTPOperation;

@interface CALFTPPublishOperation : CALURLPublishOperation {

	CalFTPOperation* _ftpOperation;

}

@property (retain) CalFTPOperation * ftpOperation;              //@synthesize ftpOperation=_ftpOperation - In the implementation block
+(char)canHandleURL:(id)arg1 ;
-(void)publishData:(id)arg1 automatic:(char)arg2 ;
-(void)abortOperation;
-(void)unpublishDataWithAutomatic:(char)arg1 ;
-(void)setFtpOperation:(CalFTPOperation *)arg1 ;
-(CalFTPOperation *)ftpOperation;
-(void)ftpOperationDidFinish:(id)arg1 ;
@end

