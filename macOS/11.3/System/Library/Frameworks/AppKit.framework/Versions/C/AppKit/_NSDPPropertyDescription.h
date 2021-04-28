/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSString, NSMethodSignature;

@interface _NSDPPropertyDescription : NSObject {

	objc_propertyRef _property;
	NSDPPropertyInfo* _propertyInfo;
	Class _implementingClass;
	NSString* _typeEncoding;

}

@property (readonly) objc_propertyRef property;                            //@synthesize property=_property - In the implementation block
@property (readonly) NSDPPropertyInfo* propertyInfo;                       //@synthesize propertyInfo=_propertyInfo - In the implementation block
@property (readonly) Class implementingClass;                              //@synthesize implementingClass=_implementingClass - In the implementation block
@property (readonly) NSString * name; 
@property (copy,readonly) NSString * typeEncoding;                         //@synthesize typeEncoding=_typeEncoding - In the implementation block
@property (readonly) NSString * dynamicPropertyTypeName; 
@property (getter=isDynamic,readonly) char dynamic; 
@property (getter=isReadOnly,readonly) char readOnly; 
@property (getter=isComputed,readonly) char computed; 
@property (readonly) SEL getterSelector; 
@property (readonly) NSMethodSignature * getterSignature; 
@property (copy,readonly) NSString * getterSignatureEncoding; 
@property (readonly) SEL setterSelector; 
@property (readonly) NSMethodSignature * setterSignature; 
@property (readonly) NSString * setterSignatureEncoding; 
+(id)propertyDescriptionWithProperty:(objc_propertyRef)arg1 class:(Class)arg2 ;
+(id)propertyDescriptionForPropertyWithName:(id)arg1 class:(Class)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(char)isDynamic;
-(id)initWithProperty:(objc_propertyRef)arg1 class:(Class)arg2 ;
-(NSString *)typeEncoding;
-(NSString *)dynamicPropertyTypeName;
-(char)isReadOnly;
-(char)isComputed;
-(SEL)getterSelector;
-(NSString *)getterSignatureEncoding;
-(SEL)setterSelector;
-(NSString *)setterSignatureEncoding;
-(NSDPPropertyInfo*)propertyInfo;
-(Class)implementingClass;
-(NSMethodSignature *)getterSignature;
-(NSMethodSignature *)setterSignature;
-(objc_propertyRef)property;
@end
