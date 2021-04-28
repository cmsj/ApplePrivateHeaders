/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <FileProvider/FPEnumerationSettings.h>

@class FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings {

	char _presenterEnumeration;
	char _wantsDirectExtensionEnumeration;
	FPItemID* _enumeratedItemID;

}

@property (nonatomic,copy) FPItemID * enumeratedItemID;                                            //@synthesize enumeratedItemID=_enumeratedItemID - In the implementation block
@property (assign,getter=isPresenterEnumeration,nonatomic) char presenterEnumeration;              //@synthesize presenterEnumeration=_presenterEnumeration - In the implementation block
@property (assign,nonatomic) char wantsDirectExtensionEnumeration;                                 //@synthesize wantsDirectExtensionEnumeration=_wantsDirectExtensionEnumeration - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FPItemID *)enumeratedItemID;
-(void)setEnumeratedItemID:(FPItemID *)arg1 ;
-(char)isPresenterEnumeration;
-(void)setPresenterEnumeration:(char)arg1 ;
-(char)wantsDirectExtensionEnumeration;
-(void)setWantsDirectExtensionEnumeration:(char)arg1 ;
@end
