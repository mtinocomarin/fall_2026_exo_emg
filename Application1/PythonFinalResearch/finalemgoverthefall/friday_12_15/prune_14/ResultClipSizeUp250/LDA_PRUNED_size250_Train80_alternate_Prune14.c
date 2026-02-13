// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 96.53%
// test_accuracy: 75.00%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 12:47:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -2.981871, 2.981879,
    1.418283, -1.418285,
    0.399826, -0.399835,
    2.717744, -2.717747,
    0.646483, -0.646572,
    -0.387138, 0.387235,
    0.108999, -0.108985,
    -1.198063, 1.198043,
    -0.005180, 0.005185,
    0.006840, -0.006870,
    -0.914657, 0.914662,
    0.095023, -0.094999,
};

float Cg_init[2] = {
    -1.286958, -1.286959
};

float xstd_init[12] = {
    0.004375, 0.001927, 0.161282, 0.205835, 0.001648, 0.000287, 0.043894, 0.103627, 0.000614, 0.000147, 0.026550, 0.098492
};

float xmean_init[12] = {
    0.011536, -0.005310, 0.265741, 0.721944, 0.003744, -0.007700, 0.015000, 0.091667, 0.003578, -0.007722, 0.012222, 0.130000
};

