/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _WKFrameHandle, NSURL, NSString, NSDate;

@interface _WKResourceLoadInfo : NSObject <WKObject, NSSecureCoding> {

	ObjectStorage<API::ResourceLoadInfo> _info;

}

@property (nonatomic,readonly) unsigned long long resourceLoadID; 
@property (nonatomic,readonly) _WKFrameHandle * frame; 
@property (nonatomic,readonly) _WKFrameHandle * parentFrame; 
@property (nonatomic,readonly) NSURL * originalURL; 
@property (nonatomic,readonly) NSString * originalHTTPMethod; 
@property (nonatomic,readonly) NSDate * eventTimestamp; 
@property (nonatomic,readonly) char loadedFromCache; 
@property (nonatomic,readonly) long long resourceType; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)originalURL;
-(_WKFrameHandle *)frame;
-(NSDate *)eventTimestamp;
-(long long)resourceType;
-(_WKFrameHandle *)parentFrame;
-(Object*)_apiObject;
-(unsigned long long)resourceLoadID;
-(NSString *)originalHTTPMethod;
-(char)loadedFromCache;
@end

