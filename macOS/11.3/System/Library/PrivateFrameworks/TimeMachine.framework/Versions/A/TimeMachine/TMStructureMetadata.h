/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSData;

@interface TMStructureMetadata : NSObject {

	NSNumber* _version;
	NSString* _type;
	NSString* _uuid;

}

@property (retain,readonly) NSNumber * version;                //@synthesize version=_version - In the implementation block
@property (retain,readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (retain,readonly) NSString * uuid;                   //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSData * dataRepresentation; 
+(id)metadataFromData:(id)arg1 error:(id*)arg2 ;
+(id)metadataWithType:(id)arg1 ;
+(id)metadataFromURL:(id)arg1 error:(id*)arg2 ;
-(id)stringValue;
-(NSString *)uuid;
-(NSString *)type;
-(NSData *)dataRepresentation;
-(NSNumber *)version;
-(id)initWithVersion:(id)arg1 uuid:(id)arg2 type:(id)arg3 ;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
@end

