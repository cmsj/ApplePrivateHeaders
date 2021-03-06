/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSFileProviderMessageInterface : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _itemIdentifier;
	NSString* _providerIdentifier;

}

@property (copy) NSString * itemIdentifier;                  //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (copy) NSString * providerIdentifier;              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(NSString *)providerIdentifier;
-(id)initWithName:(id)arg1 itemIdentifier:(id)arg2 providerIdentifier:(id)arg3 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setProviderIdentifier:(NSString *)arg1 ;
@end

