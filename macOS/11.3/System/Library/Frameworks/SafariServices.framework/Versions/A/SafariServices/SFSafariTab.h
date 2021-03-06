/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SafariServices.framework/Versions/A/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSExtensionContext;

@interface SFSafariTab : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSExtensionContext* __extensionContext;

}

@property (nonatomic,readonly) NSUUID * _uuid; 
@property (nonatomic,retain) NSExtensionContext * _extensionContext;              //@synthesize _extensionContext=__extensionContext - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)close;
-(NSUUID *)_uuid;
-(NSExtensionContext *)_extensionContext;
-(id)_remoteObjectProxy;
-(void)set_extensionContext:(NSExtensionContext *)arg1 ;
-(id)_initWithUUID:(id)arg1 ;
-(void)getActivePageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPagesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getContainingWindowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)activateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)navigateToURL:(id)arg1 ;
@end

