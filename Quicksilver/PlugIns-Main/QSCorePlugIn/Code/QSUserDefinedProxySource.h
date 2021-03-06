//
//  QSUserDefinedProxySource.h
//  Quicksilver
//
//  Created by Rob McBroom on 2012/12/04.
//
//

#import <QSCore/QSCore.h>
#import "QSUserDefinedProxyTargetPicker.h"

@interface QSUserDefinedProxySource : QSObjectSource
{
    IBOutlet NSTextField *synonymName;
    IBOutlet NSImageView *targetIcon;
    IBOutlet NSTextField *targetLabel;
    IBOutlet QSTargetPickerPanel *targetPickerWindow;
    QSUserDefinedProxyTargetPicker *targetPickerController;
}
- (IBAction)showTargetPicker:(id)sender;
@end
