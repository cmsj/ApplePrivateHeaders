/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/Versions/A/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SOAuthorizationHintsCore : NSObject <NSSecureCoding> {

	NSString* _localizedExtensionBundleDisplayName;

}

@property (nonatomic,readonly) NSString * localizedExtensionBundleDisplayName;              //@synthesize localizedExtensionBundleDisplayName=_localizedExtensionBundleDisplayName - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedExtensionBundleDisplayName;
-(id)initWithLocalizedExtensionBundleDisplayName:(id)arg1 ;
@end

