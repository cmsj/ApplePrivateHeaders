/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/Versions/A/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFUserAction.h>

@class NSString, NSDictionary;

@interface MediaFoundation.VideoUserAction : _UKNOWN_SUPERCLASS_ <MFUserAction> {

	 identifier;
	 type;
	 timeStamp;
	 options;
	 source;
	 sourceID;

}

@property (copy,nonatomic) NSString * identifier; 
@property (assign,nonatomic) long long type; 
@property (retain,nonatomic) id<MFTimeStamp> timeStamp; 
@property (copy,nonatomic) NSDictionary * options; 
@property (assign,nonatomic) long long source; 
@property (copy,nonatomic) NSString * sourceID; 
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)identifier;
-(long long)source;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(id<MFTimeStamp>)timeStamp;
-(void)setTimeStamp:(id<MFTimeStamp>)arg1 ;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
@end
