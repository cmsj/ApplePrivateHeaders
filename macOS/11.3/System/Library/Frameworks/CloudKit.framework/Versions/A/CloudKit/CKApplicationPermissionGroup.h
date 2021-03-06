/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding> {

	NSArray* _containerIDs;
	NSArray* _applicationBundleIDs;
	unsigned long long _enabledPermissions;

}

@property (nonatomic,copy) NSArray * containerIDs;                               //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,copy) NSArray * applicationBundleIDs;                       //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) unsigned long long enabledPermissions;              //@synthesize enabledPermissions=_enabledPermissions - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(void)setApplicationBundleIDs:(NSArray *)arg1 ;
-(void)setEnabledPermissions:(unsigned long long)arg1 ;
-(NSArray *)containerIDs;
-(NSArray *)applicationBundleIDs;
-(unsigned long long)enabledPermissions;
@end

