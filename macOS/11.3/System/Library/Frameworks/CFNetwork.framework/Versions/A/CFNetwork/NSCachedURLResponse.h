/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCachedURLResponseInternal, NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSCachedURLResponseInternal* _internal;

}

@property (copy,readonly) NSURLResponse * response; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (readonly) unsigned long long storagePolicy; 
+(char)supportsSecureCoding;
-(id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4 ;
-(void)_deallocInternalCFCachedURLResponse;
-(void)_reestablishInternalCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURLResponse *)response;
-(id)dataArray;
-(const CFCachedURLResponse*)_CFCachedURLResponse;
-(id)_initWithCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(unsigned long long)storagePolicy;
-(id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4 ;
-(id)initWithResponse:(id)arg1 data:(id)arg2 ;
@end

