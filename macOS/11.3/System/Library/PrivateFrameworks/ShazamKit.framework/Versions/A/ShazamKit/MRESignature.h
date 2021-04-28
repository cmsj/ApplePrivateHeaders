/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/Versions/A/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface MRESignature : NSObject {

	unsigned long long _trackID;
	NSData* _signatureData;

}

@property (readonly) unsigned long long trackID;              //@synthesize trackID=_trackID - In the implementation block
@property (readonly) NSData * signatureData;                  //@synthesize signatureData=_signatureData - In the implementation block
-(void)dealloc;
-(unsigned long long)trackID;
-(NSData *)signatureData;
-(id)initWithSignatureData:(id)arg1 trackID:(unsigned long long)arg2 ;
@end
