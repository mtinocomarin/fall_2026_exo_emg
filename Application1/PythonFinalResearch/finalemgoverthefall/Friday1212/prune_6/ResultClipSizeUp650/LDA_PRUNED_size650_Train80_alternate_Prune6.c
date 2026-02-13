// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.29%
// test_accuracy: 71.35%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_40.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_35.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 15:49:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.789612, 0.789640,
    -0.156547, 0.156524,
    0.546803, -0.546833,
    0.660866, -0.660844,
    0.817630, -0.817574,
    -0.826571, 0.826516,
    -0.066454, 0.066466,
    -0.074752, 0.074741,
    -0.488771, 0.488707,
    0.359191, -0.359076,
    -0.326280, 0.326251,
    0.101673, -0.101740,
};

float Cg_init[2] = {
    -0.326978, -0.326974
};

float xstd_init[12] = {
    0.003774, 0.001367, 0.106164, 0.173314, 0.001507, 0.000441, 0.026387, 0.076772, 0.001753, 0.000093, 0.016342, 0.069161
};

float xmean_init[12] = {
    0.009814, -0.006243, 0.179146, 0.586795, 0.003182, -0.007740, 0.006752, 0.050256, 0.003267, -0.007806, 0.004274, 0.068398
};

