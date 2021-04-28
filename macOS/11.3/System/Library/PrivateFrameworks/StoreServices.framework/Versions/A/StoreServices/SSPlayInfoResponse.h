/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError, NSData, NSString;

@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying> {

	NSError* _error;
	NSData* _playInfoData;

}

@property (nonatomic,readonly) NSError * error;                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * playInfoData;               //@synthesize playInfoData=_playInfoData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSError *)error;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithPlayInfoData:(id)arg1 error:(id)arg2 ;
-(NSData *)playInfoData;
@end
