import { ComponentFixture, TestBed } from '@angular/core/testing';

import { OwlNavComponent } from './owl-nav.component';

describe('OwlNavComponent', () => {
  let component: OwlNavComponent;
  let fixture: ComponentFixture<OwlNavComponent>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [OwlNavComponent]
    })
    .compileComponents();
    
    fixture = TestBed.createComponent(OwlNavComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
