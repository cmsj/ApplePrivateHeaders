/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityFoundation/AccessibilityFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _AXFUIElementDataProvider : NSObject <NSCopying> {

	char _valid;
	NSString* _applicationIdentifier;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,getter=isValid,nonatomic) char valid;                   //@synthesize valid=_valid - In the implementation block
-(char)isIPCDataProvider;
-(id)copyAttributeNames;
-(unsigned long long)countForAttribute:(id)arg1 ;
-(const void*)copyAttributeValue:(id)arg1 ;
-(int)realApplicationProcessIdentifier;
-(ProcessSerialNumber)realApplicationProcessSerialNumber;
-(id)transportData;
-(void)setAttribute:(id)arg1 withValue:(void*)arg2 ;
-(id)copyActionNames;
-(char)isiOSPlatformElement;
-(id)copyAXFUIElementForAttribute:(id)arg1 ;
-(id)copyArrayForAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)setAttribute:(id)arg1 withAXFUIElementValue:(id)arg2 ;
-(id)copyAXFUIElementForParameterizedAttribute:(id)arg1 parameter:(void*)arg2 ;
-(id)copyAXFUIElementsForParameterizedAttribute:(id)arg1 parameter:(void*)arg2 ;
-(id)copyAXFUIElementsForAttribute:(id)arg1 ;
-(void)setAttribute:(id)arg1 withAXFUIElementValues:(id)arg2 ;
-(id)copyAXFUIElementAtPoint:(CGPoint)arg1 includeIgnored:(char)arg2 ;
-(id)copyParameterizedAttributeNames;
-(id)copyDescriptionForAction:(id)arg1 ;
-(id)copyAXFUIElementAtPoint:(CGPoint)arg1 ;
-(id)outgoingRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(char)isValid;
-(NSString *)applicationIdentifier;
-(void)performAction:(id)arg1 ;
-(unsigned long long)transportType;
-(void)setValid:(char)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(char)supportsAction:(id)arg1 ;
-(id)applicationElement;
-(int)applicationProcessIdentifier;
-(ProcessSerialNumber)applicationProcessSerialNumber;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(char)canSetAttributeValue:(id)arg1 ;
-(id)convertOutgoingValueForAttribute:(id)arg1 value:(id)arg2 ;
-(const void*)copyParameterizedAttributeValue:(id)arg1 parameter:(void*)arg2 ;
-(char)supportsAttribute:(id)arg1 ;
@end

