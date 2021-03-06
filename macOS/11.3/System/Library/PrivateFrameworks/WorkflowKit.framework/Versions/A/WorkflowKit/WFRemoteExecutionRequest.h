/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFPBCodable.h>

@class NSString;

@interface WFRemoteExecutionRequest : NSObject <WFPBCodable> {

	long long _minimumSupportedVersion;
	NSString* _identifier;
	long long _version;

}

@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (nonatomic,readonly) long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)version;
+(char)supportsVersion:(long long)arg1 ;
+(id)unsupportedVersionError;
+(id)identifierFromData:(id)arg1 error:(id*)arg2 ;
+(char)isUnsupportedVersionError:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(long long)version;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(long long)minimumSupportedVersion;
-(char)writeTo:(id)arg1 error:(id*)arg2 ;
-(char)readFrom:(id)arg1 error:(id*)arg2 ;
-(char)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)emptyProtobufError;
@end

