/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface AXVMenuInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _menuTitle;
	NSArray* _menuItems;
	NSArray* _addedMenuItems;
	long long _rowCountToShow;

}

@property (nonatomic,copy) NSString * menuTitle;                    //@synthesize menuTitle=_menuTitle - In the implementation block
@property (nonatomic,copy) NSArray * menuItems;                     //@synthesize menuItems=_menuItems - In the implementation block
@property (nonatomic,copy) NSArray * addedMenuItems;                //@synthesize addedMenuItems=_addedMenuItems - In the implementation block
@property (assign,nonatomic) long long rowCountToShow;              //@synthesize rowCountToShow=_rowCountToShow - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)menuItems;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSString *)menuTitle;
-(NSArray *)addedMenuItems;
-(long long)rowCountToShow;
-(void)setMenuTitle:(NSString *)arg1 ;
-(void)setAddedMenuItems:(NSArray *)arg1 ;
-(void)setRowCountToShow:(long long)arg1 ;
-(char)_isEqualToMenuInfo:(id)arg1 ;
@end

