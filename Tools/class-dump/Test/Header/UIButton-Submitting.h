//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSNumber;

@interface UIButton (Submitting)
- (void)setSpinnerTitleLabel:(id)arg1;
- (id)spinnerTitleLabel;
- (void)setModalView:(id)arg1;
- (id)modalView;
- (void)setSpinnerView:(id)arg1;
- (id)spinnerView;
- (void)setSubmitting:(id)arg1;
@property(readonly, nonatomic, getter=isSubmitting) NSNumber *submitting;
- (void)endSubmitting;
- (void)beginSubmitting:(id)arg1;
@end
