/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSUStreamWriteChannel.h>

@protocol OS_dispatch_queue;
@class TSUZipFileWriter, NSObject, NSString;

@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel> {

	TSUZipFileWriter* _archiveWriter;
	NSObject*<OS_dispatch_queue> _writerQueue;
	Ac _isClosed;

}

@property (nonatomic,readonly) char isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(char)isValid;
-(void)close;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithArchiveWriter:(id)arg1 ;
@end

