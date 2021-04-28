/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageRenderRequest.h>

@class NSString, NSDictionary;

@interface NUImageDataRequest : NUImageRenderRequest {

	NSString* _dataExtractor;
	NSDictionary* _options;

}

@property (copy) NSString * dataExtractor;              //@synthesize dataExtractor=_dataExtractor - In the implementation block
@property (copy) NSDictionary * options;                //@synthesize options=_options - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)newRenderJob;
-(id)initWithComposition:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 ;
-(id)initWithRequest:(id)arg1 dataExtractor:(id)arg2 options:(id)arg3 ;
-(NSString *)dataExtractor;
-(void)setDataExtractor:(NSString *)arg1 ;
@end
