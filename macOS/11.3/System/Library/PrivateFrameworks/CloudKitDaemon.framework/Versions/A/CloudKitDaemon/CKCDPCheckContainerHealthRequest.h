/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKCDPCheckContainerHealthRequest : PBRequest <NSCopying> {

	NSString* _containerName;
	NSString* _environment;

}

@property (nonatomic,readonly) char hasContainerName; 
@property (nonatomic,retain) NSString * containerName;              //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,readonly) char hasEnvironment; 
@property (nonatomic,retain) NSString * environment;                //@synthesize environment=_environment - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnvironment:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)environment;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasEnvironment;
-(char)hasContainerName;
@end

