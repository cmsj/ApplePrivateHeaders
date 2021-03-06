/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Assistant/Plugins/AppSync.assistantBundle/Contents/MacOS/AppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSync/AppSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface AAPSyncAppIdentifier : NSObject <NSCopying, NSSecureCoding> {

	NSString* _appId;
	NSURL* _bundleURL;

}

@property (nonatomic,copy,readonly) NSString * appId;               //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * bundleURL;              //@synthesize bundleURL=_bundleURL - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithAppId:(id)arg1 bundleURL:(id)arg2 ;
-(id)siriIdentifier;
-(char)isMetaDataItemDelete;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)bundleURL;
-(NSString *)appId;
@end

