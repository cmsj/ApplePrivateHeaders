/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/EquationKit.framework/Versions/A/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <EquationKit/EQKitMathMLNode.h>
#import <libobjc.A.dylib/EQKitMathMLNode.h>

@class EQKitMathMLNode;

@interface EQKitMathMLTernaryNode : EQKitMathMLNode <EQKitMathMLNode> {

	EQKitMathMLNode* mFirst;
	EQKitMathMLNode* mSecond;
	EQKitMathMLNode* mThird;

}
-(void)dealloc;
-(id)init;
-(BOOL)isBaseFontNameUsed;
-(id)initFromXMLNode:(xmlNode*)arg1 parser:(id)arg2 ;
-(const set<EQKitTypes::Attributes::Enum, std::__1::less<EQKitTypes::Attributes::Enum>, std::__1::allocator<EQKitTypes::Attributes::Enum>>Ref)mathMLAttributes;
-(id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3 ;
@end

