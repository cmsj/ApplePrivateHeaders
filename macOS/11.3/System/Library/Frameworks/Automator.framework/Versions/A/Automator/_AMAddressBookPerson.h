/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMAddressBookEntry.h>

@class NSString, NSDate;

@interface _AMAddressBookPerson : _AMAddressBookEntry

@property (copy) NSString * nickname; 
@property (copy) NSString * organization; 
@property (copy) NSString * maidenName; 
@property (copy) NSString * suffix; 
@property (copy,readonly) NSString * vcard; 
@property (copy) NSString * homePage; 
@property (copy) NSDate * birthDate; 
@property (copy) NSString * phoneticLastName; 
@property (copy) NSString * title; 
@property (copy) NSString * phoneticMiddleName; 
@property (copy) NSString * department; 
@property (copy) NSString * image; 
@property (copy,readonly) NSString * name; 
@property (copy) NSString * note; 
@property (assign) char company; 
@property (copy) NSString * middleName; 
@property (copy) NSString * phoneticFirstName; 
@property (copy) NSString * jobTitle; 
@property (copy) NSString * lastName; 
@property (copy) NSString * firstName; 
-(NSString *)name;
-(void)setImage:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)groups;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(id)addresses;
-(NSString *)title;
-(NSString *)image;
-(NSString *)firstName;
-(void)setJobTitle:(NSString *)arg1 ;
-(NSString *)jobTitle;
-(NSString *)note;
-(id)urls;
-(NSDate *)birthDate;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)phoneticMiddleName;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSString *)maidenName;
-(NSString *)suffix;
-(NSString *)department;
-(NSString *)organization;
-(id)relatedNames;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(void)setOrganization:(NSString *)arg1 ;
-(id)emails;
-(void)setDepartment:(NSString *)arg1 ;
-(void)setHomePage:(NSString *)arg1 ;
-(void)setMaidenName:(NSString *)arg1 ;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)homePage;
-(void)setNote:(NSString *)arg1 ;
-(char)company;
-(id)phones;
-(void)setCompany:(char)arg1 ;
-(id)MSNHandles;
-(id)JabberHandles;
-(id)customDates;
-(id)AIMHandles;
-(id)YahooHandles;
-(id)ICQHandles;
-(NSString *)vcard;
-(void)setBirthDate:(NSDate *)arg1 ;
@end
