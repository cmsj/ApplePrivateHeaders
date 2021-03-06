/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IFColor, NSUUID;

@interface ISImageStyleDescriptor : NSObject <NSSecureCoding, NSCopying> {

	char _templateVariant;
	char _selectedVariant;
	IFColor* _tintColor;

}

@property (assign,nonatomic) char templateVariant;              //@synthesize templateVariant=_templateVariant - In the implementation block
@property (assign,nonatomic) char selectedVariant;              //@synthesize selectedVariant=_selectedVariant - In the implementation block
@property (nonatomic,retain) IFColor * tintColor;               //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) NSUUID * digest; 
+(id)defaultStyleDescriptor;
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)templateVariant;
-(char)selectedVariant;
-(IFColor *)tintColor;
-(void)setTintColor:(IFColor *)arg1 ;
-(NSUUID *)digest;
-(void)setSelectedVariant:(char)arg1 ;
-(void)setTemplateVariant:(char)arg1 ;
@end

