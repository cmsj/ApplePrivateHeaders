/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, CALayer, NSTextField, NSColor, NSByteCountFormatter, NSLayoutConstraint;

@interface MMInfoCapacityBarCategory : NSObject {

	char _showsSizeInLabel;
	unsigned long long _sizeInBytes;
	NSString* _displayName;
	NSString* _categoryIdentifier;
	NSString* _accessibilityDescription;
	NSArray* _alternateDisplayNames;
	NSString* _toolTipLabel;
	CALayer* _layer;
	NSTextField* _label;
	NSColor* _color;
	NSString* _sizeDescription;
	NSByteCountFormatter* _byteCountFormatter;
	NSLayoutConstraint* _widthLayoutConstraint;
	NSLayoutConstraint* _leadingLayoutConstraint;

}

@property (nonatomic,readonly) NSTextField * label;                                     //@synthesize label=_label - In the implementation block
@property (readonly) NSColor * color;                                                   //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * toolTipLabel;                                   //@synthesize toolTipLabel=_toolTipLabel - In the implementation block
@property (nonatomic,retain) NSString * sizeDescription;                                //@synthesize sizeDescription=_sizeDescription - In the implementation block
@property (nonatomic,retain) NSByteCountFormatter * byteCountFormatter;                 //@synthesize byteCountFormatter=_byteCountFormatter - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * widthLayoutConstraint;                //@synthesize widthLayoutConstraint=_widthLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingLayoutConstraint;              //@synthesize leadingLayoutConstraint=_leadingLayoutConstraint - In the implementation block
@property (assign) unsigned long long sizeInBytes;                                      //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
@property (copy) NSString * displayName;                                                //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * categoryIdentifier;                                         //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (copy) NSString * accessibilityDescription;                                   //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (copy) NSArray * alternateDisplayNames;                                       //@synthesize alternateDisplayNames=_alternateDisplayNames - In the implementation block
@property (assign,nonatomic) char showsSizeInLabel;                                     //@synthesize showsSizeInLabel=_showsSizeInLabel - In the implementation block
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,readonly) CALayer * layer;                                         //@synthesize layer=_layer - In the implementation block
-(id)init;
-(NSString *)displayName;
-(NSTextField *)label;
-(CALayer *)layer;
-(NSString *)accessibilityDescription;
-(NSColor *)color;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(long long)textAlignment;
-(unsigned long long)sizeInBytes;
-(void)setSizeInBytes:(unsigned long long)arg1 ;
-(NSString *)categoryIdentifier;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(NSString *)sizeDescription;
-(void)setSizeDescription:(NSString *)arg1 ;
-(NSByteCountFormatter *)byteCountFormatter;
-(void)setByteCountFormatter:(NSByteCountFormatter *)arg1 ;
-(NSArray *)alternateDisplayNames;
-(id)allDisplayNames;
-(void)setAlternateDisplayNames:(NSArray *)arg1 ;
-(NSString *)toolTipLabel;
-(void)setToolTipLabel:(NSString *)arg1 ;
-(char)showsSizeInLabel;
-(void)setShowsSizeInLabel:(char)arg1 ;
-(NSLayoutConstraint *)widthLayoutConstraint;
-(void)setWidthLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leadingLayoutConstraint;
-(void)setLeadingLayoutConstraint:(NSLayoutConstraint *)arg1 ;
@end

