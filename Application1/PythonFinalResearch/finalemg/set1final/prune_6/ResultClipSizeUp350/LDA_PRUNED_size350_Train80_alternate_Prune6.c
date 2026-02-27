// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 70.83%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt'], 'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt']}
// generated: 2026-02-13 17:10:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.994469, 0.994466,
    -0.404219, 0.404241,
    0.000000, 0.000000,
    -0.428084, -0.428084,
    -0.686511, -0.686511,
    -0.623406, -0.623406,
    0.367821, 0.367821,
    0.363760, 0.363760,
    -0.333024, -0.333024,
    -0.442789, -0.442789,
    -0.231117, -0.231117,
    -0.341513, -0.341513,
};

float Cg_init[2] = {
    -0.227512, -0.709575
};

float xstd_init[12] = {
    0.000198, 0.000015, 1.000000, 0.015228, 0.002006, 0.000635, 0.071605, 0.125386, 0.001856, 0.000479, 0.069440, 0.187423
};

float xmean_init[12] = {
    0.002742, -0.007914, 0.000000, 0.006667, 0.008381, -0.006557, 0.144444, 0.500000, 0.006223, -0.007133, 0.092222, 0.348333
};

