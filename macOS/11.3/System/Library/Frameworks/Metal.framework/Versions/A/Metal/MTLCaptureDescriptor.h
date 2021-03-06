/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface MTLCaptureDescriptor : NSObject <NSCopying> {

	id _captureObject;
	long long _destination;
	NSURL* _outputURL;

}

@property (nonatomic,retain) id captureObject;                   //@synthesize captureObject=_captureObject - In the implementation block
@property (assign,nonatomic) long long destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                    //@synthesize outputURL=_outputURL - In the implementation block
-(id)captureObject;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(long long)destination;
-(void)setDestination:(long long)arg1 ;
-(void)setCaptureObject:(id)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSURL *)outputURL;
@end

