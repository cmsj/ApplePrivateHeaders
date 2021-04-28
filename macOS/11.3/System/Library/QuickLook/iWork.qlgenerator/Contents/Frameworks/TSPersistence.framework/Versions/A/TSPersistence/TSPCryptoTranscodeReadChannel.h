/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel, TSPMutableCryptoInfo;
@class NSString;

@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	id<TSPMutableCryptoInfo> _encryptionInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)close;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 decryptionInfo:(id)arg2 encryptionInfo:(id)arg3 ;
@end
