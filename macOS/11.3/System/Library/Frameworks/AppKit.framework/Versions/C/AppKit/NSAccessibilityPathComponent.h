/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSAccessibilityIndexedMockUIElement.h>

@class NSPathComponentCell;

@interface NSAccessibilityPathComponent : NSAccessibilityIndexedMockUIElement {

	NSPathComponentCell* _pathComponentCell;

}
+(id)pathComponentWithPathComponentCell:(id)arg1 index:(long long)arg2 parent:(id)arg3 ;
-(void)dealloc;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityEnabledAttribute;
-(char)accessibilityIsEnabledAttributeSettable;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(id)pathComponentCell;
-(id)accessibilityURLAttribute;
-(char)accessibilityIsURLAttributeSettable;
-(id)initWithPathComponentCell:(id)arg1 index:(long long)arg2 parent:(id)arg3 ;
@end

