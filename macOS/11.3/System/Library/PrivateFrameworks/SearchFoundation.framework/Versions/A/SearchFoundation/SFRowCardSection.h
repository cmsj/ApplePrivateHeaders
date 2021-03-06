/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/Versions/A/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFRowCardSection.h>
@class NSArray, NSString, SFColor, SFImage, SFRichText, NSNumber, NSDictionary, NSData;


@protocol SFRowCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) char canBeHidden; 
@property (assign,nonatomic) char hasTopPadding; 
@property (assign,nonatomic) char hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,retain) SFImage * image; 
@property (assign,nonatomic) char imageIsRightAligned; 
@property (nonatomic,retain) SFRichText * leadingText; 
@property (nonatomic,retain) SFRichText * trailingText; 
@property (nonatomic,retain) SFImage * attributionImage; 
@property (nonatomic,copy) NSString * key; 
@property (assign,nonatomic) char keyNoWrap; 
@property (nonatomic,copy) NSNumber * keyWeight; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) char valueNoWrap; 
@property (nonatomic,copy) NSNumber * valueWeight; 
@property (assign,nonatomic) char cardPaddingBottom; 
@property (nonatomic,retain) SFRichText * leadingSubtitle; 
@property (nonatomic,retain) SFRichText * trailingSubtitle; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(NSString *)value;
-(void)setImage:(id)arg1;
-(NSString *)key;
-(NSDictionary *)dictionaryRepresentation;
-(void)setKey:(id)arg1;
-(void)setValue:(id)arg1;
-(SFRichText *)leadingText;
-(SFRichText *)trailingText;
-(void)setBackgroundColor:(id)arg1;
-(SFImage *)image;
-(SFColor *)backgroundColor;
-(void)setLeadingText:(id)arg1;
-(void)setTrailingText:(id)arg1;
-(NSArray *)punchoutOptions;
-(SFImage *)attributionImage;
-(void)setAttributionImage:(id)arg1;
-(NSData *)jsonData;
-(char)imageIsRightAligned;
-(void)setImageIsRightAligned:(char)arg1;
-(void)setPunchoutOptions:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(char)arg1;
-(void)setKeyNoWrap:(char)arg1;
-(void)setKeyWeight:(id)arg1;
-(void)setCardPaddingBottom:(char)arg1;
-(void)setValueNoWrap:(char)arg1;
-(void)setValueWeight:(id)arg1;
-(void)setHasTopPadding:(char)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1;
-(int)separatorStyle;
-(char)keyNoWrap;
-(NSNumber *)keyWeight;
-(char)valueNoWrap;
-(NSNumber *)valueWeight;
-(char)cardPaddingBottom;
-(SFRichText *)leadingSubtitle;
-(void)setLeadingSubtitle:(id)arg1;
-(SFRichText *)trailingSubtitle;
-(void)setTrailingSubtitle:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, SFImage, SFRichText, NSNumber, NSDictionary, NSData, SFCard, SFUserReportRequest, SFCommand;

@interface SFRowCardSection : SFCardSection <SFRowCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF1 _has;
	char _canBeHidden;
	char _hasTopPadding;
	char _hasBottomPadding;
	char _imageIsRightAligned;
	char _keyNoWrap;
	char _valueNoWrap;
	char _cardPaddingBottom;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	SFImage* _image;
	SFRichText* _leadingText;
	SFRichText* _trailingText;
	SFImage* _attributionImage;
	NSString* _key;
	NSNumber* _keyWeight;
	NSString* _value;
	NSNumber* _valueWeight;
	SFRichText* _leadingSubtitle;
	SFRichText* _trailingSubtitle;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) char canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) char hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) char hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) char imageIsRightAligned;                               //@synthesize imageIsRightAligned=_imageIsRightAligned - In the implementation block
@property (nonatomic,retain) SFRichText * leadingText;                               //@synthesize leadingText=_leadingText - In the implementation block
@property (nonatomic,retain) SFRichText * trailingText;                              //@synthesize trailingText=_trailingText - In the implementation block
@property (nonatomic,retain) SFImage * attributionImage;                             //@synthesize attributionImage=_attributionImage - In the implementation block
@property (nonatomic,copy) NSString * key;                                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char keyNoWrap;                                         //@synthesize keyNoWrap=_keyNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * keyWeight;                                     //@synthesize keyWeight=_keyWeight - In the implementation block
@property (nonatomic,copy) NSString * value;                                         //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) char valueNoWrap;                                       //@synthesize valueNoWrap=_valueNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * valueWeight;                                   //@synthesize valueWeight=_valueWeight - In the implementation block
@property (assign,nonatomic) char cardPaddingBottom;                                 //@synthesize cardPaddingBottom=_cardPaddingBottom - In the implementation block
@property (nonatomic,retain) SFRichText * leadingSubtitle;                           //@synthesize leadingSubtitle=_leadingSubtitle - In the implementation block
@property (nonatomic,retain) SFRichText * trailingSubtitle;                          //@synthesize trailingSubtitle=_trailingSubtitle - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) char hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (nonatomic,retain) SFCommand * command; 
@property (nonatomic,retain) SFCommand * previewCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(Class)_searchUIViewClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSString *)value;
-(void)setImage:(SFImage *)arg1 ;
-(NSString *)key;
-(NSDictionary *)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(SFRichText *)leadingText;
-(SFRichText *)trailingText;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFImage *)image;
-(SFColor *)backgroundColor;
-(void)setLeadingText:(SFRichText *)arg1 ;
-(void)setTrailingText:(SFRichText *)arg1 ;
-(NSArray *)punchoutOptions;
-(SFImage *)attributionImage;
-(void)setAttributionImage:(SFImage *)arg1 ;
-(NSData *)jsonData;
-(char)imageIsRightAligned;
-(void)setImageIsRightAligned:(char)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(char)arg1 ;
-(void)setKeyNoWrap:(char)arg1 ;
-(void)setKeyWeight:(NSNumber *)arg1 ;
-(void)setCardPaddingBottom:(char)arg1 ;
-(void)setValueNoWrap:(char)arg1 ;
-(void)setValueWeight:(NSNumber *)arg1 ;
-(void)setHasTopPadding:(char)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(char)canBeHidden;
-(char)hasTopPadding;
-(char)hasBottomPadding;
-(void)setHasBottomPadding:(char)arg1 ;
-(int)separatorStyle;
-(char)hasCanBeHidden;
-(char)hasHasTopPadding;
-(char)hasHasBottomPadding;
-(char)hasSeparatorStyle;
-(char)keyNoWrap;
-(NSNumber *)keyWeight;
-(char)valueNoWrap;
-(NSNumber *)valueWeight;
-(char)cardPaddingBottom;
-(SFRichText *)leadingSubtitle;
-(void)setLeadingSubtitle:(SFRichText *)arg1 ;
-(SFRichText *)trailingSubtitle;
-(void)setTrailingSubtitle:(SFRichText *)arg1 ;
-(char)hasImageIsRightAligned;
-(char)hasKeyNoWrap;
-(char)hasValueNoWrap;
-(char)hasCardPaddingBottom;
@end

