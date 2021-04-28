/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface AMSMediaVideo : NSObject {

	NSDictionary* _videoDictionary;

}

@property (readonly) NSURL * URL; 
@property (copy,readonly) NSDictionary * videoDictionary;              //@synthesize videoDictionary=_videoDictionary - In the implementation block
-(id)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)URL;
-(NSDictionary *)videoDictionary;
@end
