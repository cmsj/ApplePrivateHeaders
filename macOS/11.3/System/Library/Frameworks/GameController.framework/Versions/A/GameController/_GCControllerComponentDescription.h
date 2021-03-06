/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_GCControllerComponentDescription.h>
#import <libobjc.A.dylib/_GCUpdatableIPCObjectDescription.h>

@protocol GCControllerComponentNSSecureCoding, GCControllerComponent;
@class NSArray, NSString;

@interface _GCControllerComponentDescription : NSObject <_GCControllerComponentDescription, _GCUpdatableIPCObjectDescription> {

	id<GCControllerComponent><NSSecureCoding> _component;
	NSArray* _bindingDescriptions;
	id<GCControllerComponent> _materializedComponent;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(id)initWithComponent:(id)arg1 ;
-(id)materializeWithContext:(id)arg1 ;
-(id)initWithComponent:(id)arg1 bindings:(id)arg2 ;
-(void)_applyBinding:(id)arg1 toComponent:(id)arg2 ;
-(char)update:(id)arg1 withContext:(id)arg2 ;
@end

