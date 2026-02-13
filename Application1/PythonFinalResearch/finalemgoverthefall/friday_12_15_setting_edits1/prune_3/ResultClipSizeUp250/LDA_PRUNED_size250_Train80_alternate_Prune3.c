// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.76%
// test_accuracy: 76.56%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 13:12:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.326200, 1.326197,
    0.443880, -0.443883,
    0.807285, -0.807283,
    0.215947, -0.215942,
    0.240474, -0.240406,
    -0.313812, 0.313746,
    -0.172612, 0.172602,
    0.140786, -0.140778,
    -0.023498, 0.023514,
    -0.392620, 0.392557,
    0.028289, -0.028259,
    0.230178, -0.230158,
};

float Cg_init[2] = {
    -0.319805, -0.319799
};

float xstd_init[12] = {
    0.004644, 0.002160, 0.341284, 0.121431, 0.001476, 0.000271, 0.066472, 0.142990, 0.000640, 0.000160, 0.051059, 0.143212
};

float xmean_init[12] = {
    0.011283, -0.005384, 0.478448, 1.042759, 0.003575, -0.007723, 0.019253, 0.639310, 0.003564, -0.007726, 0.016667, 0.704482
};

