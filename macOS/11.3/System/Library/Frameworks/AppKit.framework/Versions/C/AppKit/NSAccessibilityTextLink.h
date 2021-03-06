/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSAccessibilityMockUIElement.h>

@interface NSAccessibilityTextLink : NSAccessibilityMockUIElement {

	NSRange _characterRange;

}
+(id)linkWithCharacterRange:(NSRange)arg1 parent:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityTitleAttribute;
-(char)accessibilityIsTitleAttributeSettable;
-(id)initWithCharacterRange:(NSRange)arg1 parent:(id)arg2 ;
-(NSRange)characterRange;
-(id)_parentAttributedString;
-(id)accessibilityURLAttribute;
-(char)accessibilityIsURLAttributeSettable;
@end

