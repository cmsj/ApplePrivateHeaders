/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMAttachment.h>

@class NSURL;

@interface REMFileAttachment : REMAttachment {

	char _isTemporaryFileURL;
	unsigned long long _fileSize;
	NSURL* _fileURL;

}

@property (assign,nonatomic) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                          //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) char isTemporaryFileURL;                  //@synthesize isTemporaryFileURL=_isTemporaryFileURL - In the implementation block
+(char)supportsSecureCoding;
+(id)cdEntityName;
+(id)createTemporaryFileWithData:(id)arg1 UTI:(id)arg2 ;
+(id)createTemporaryFileURLWithUTI:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(unsigned long long)fileSize;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(id)_deepCopy;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4 fileSize:(unsigned long long)arg5 fileURL:(id)arg6 data:(id)arg7 ;
-(char)isTemporaryFileURL;
-(void)setIsTemporaryFileURL:(char)arg1 ;
@end

