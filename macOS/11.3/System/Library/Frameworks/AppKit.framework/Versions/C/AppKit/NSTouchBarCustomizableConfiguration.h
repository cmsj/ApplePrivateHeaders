/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface NSTouchBarCustomizableConfiguration : NSObject <NSCopying> {

	NSString* _identifier;
	NSArray* _defaultItemIdentifiers;
	NSArray* _allowedItemIdentifiers;
	NSArray* _requiredItemIdentifiers;
	NSArray* _customizedItemIdentifiers;

}

@property (copy,readonly) NSArray * presentedItemIdentifiers; 
@property (copy) NSString * identifier; 
@property (copy) NSArray * defaultItemIdentifiers; 
@property (copy) NSArray * allowedItemIdentifiers; 
@property (copy) NSArray * requiredItemIdentifiers; 
@property (setter=_setCustomizedItemIdentifiers:,getter=_customizedItemIdentifiers,copy) NSArray * _customizedItemIdentifiers; 
+(id)keyPathsForValuesAffectingPresentedItemIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDefaultItemIdentifiers:(NSArray *)arg1 ;
-(void)_setCustomizedItemIdentifiers:(id)arg1 ;
-(void)_resetCustomization;
-(NSArray *)defaultItemIdentifiers;
-(NSArray *)allowedItemIdentifiers;
-(NSArray *)requiredItemIdentifiers;
-(void)setAllowedItemIdentifiers:(NSArray *)arg1 ;
-(void)setRequiredItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)presentedItemIdentifiers;
-(void)_unregisterForCustomizationChangesWithIdentifier:(id)arg1 ;
-(void)_registerForCustomizationChangesWithIdentifier:(id)arg1 ;
-(NSArray *)_customizedItemIdentifiers;
-(void)_persistCustomizedItemIdentifiers;
@end

