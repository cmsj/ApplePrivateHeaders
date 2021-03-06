/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSString;

@interface _WKTextManipulationExclusionRule : NSObject {

	char _isExclusion;
	RetainPtr<NSString>* _elementName;
	RetainPtr<NSString>* _attributeName;
	RetainPtr<NSString>* _attributeValue;
	RetainPtr<NSString>* _className;

}

@property (nonatomic,readonly) char isExclusion;                       //@synthesize isExclusion=_isExclusion - In the implementation block
@property (nonatomic,readonly) NSString * elementName; 
@property (nonatomic,readonly) NSString * attributeName; 
@property (nonatomic,readonly) NSString * attributeValue; 
@property (nonatomic,readonly) NSString * className; 
-(NSString *)className;
-(NSString *)elementName;
-(NSString *)attributeValue;
-(NSString *)attributeName;
-(char)isExclusion;
-(id)initExclusion:(char)arg1 forElement:(id)arg2 ;
-(id)initExclusion:(char)arg1 forAttribute:(id)arg2 value:(id)arg3 ;
-(id)initExclusion:(char)arg1 forClass:(id)arg2 ;
@end

